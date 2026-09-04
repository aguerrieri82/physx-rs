[CmdletBinding()]
param(
    [string] $BuildDirectory,
    [string] $PackageDirectory
)

$ErrorActionPreference = 'Stop'
$ScriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path

if (-not $BuildDirectory) {
    $BuildDirectory = Join-Path $ScriptRoot 'build/android-arm64-release'
}
if (-not $PackageDirectory) {
    $PackageDirectory = Join-Path $ScriptRoot '../../../libs/physx-590'
}

$BuildDirectory = [System.IO.Path]::GetFullPath($BuildDirectory)
$PackageDirectory = [System.IO.Path]::GetFullPath($PackageDirectory)
$SourceDirectory = Join-Path $ScriptRoot 'physx/physx'
$SourceLibraries = Join-Path $SourceDirectory 'lib/bin/linux.aarch64/release'
$PackageIncludes = Join-Path $PackageDirectory 'include'
$PackageLibraries = Join-Path $PackageDirectory 'bin/android-arm64/release'

$NdkHome = $env:NDK_HOME
if (-not $NdkHome) { $NdkHome = 'C:\Android\Sdk\ndk\30.0.14904198' }
$NdkHome = $NdkHome.TrimEnd('\', '/')
$AndroidAbi = if ($env:ANDROID_ABI) { $env:ANDROID_ABI } else { 'arm64-v8a' }
$AndroidPlatform = if ($env:ANDROID_PLATFORM) { $env:ANDROID_PLATFORM } else { '30' }
$AndroidStl = if ($env:ANDROID_STL) { $env:ANDROID_STL } else { 'c++_static' }
$AndroidCFlags = if ($env:ANDROID_C_FLAGS) { $env:ANDROID_C_FLAGS } else { '-ffunction-sections -fdata-sections -fvisibility=hidden -O3' }
$AndroidCppFlags = if ($env:ANDROID_CPP_FLAGS) { $env:ANDROID_CPP_FLAGS } else { '-fexceptions -frtti -D__ARM_NEON -fvisibility=hidden -fvisibility-inlines-hidden -O3' }
$AndroidLdFlags = if ($env:ANDROID_LD_FLAGS) { $env:ANDROID_LD_FLAGS } else { '-Wl,-z,max-page-size=16384 -Wl,--gc-sections -Wl,--exclude-libs,ALL' }
$Toolchain = Join-Path $NdkHome 'build/cmake/android.toolchain.cmake'

if (-not (Test-Path -LiteralPath $Toolchain)) {
    throw "Android NDK toolchain was not found: $Toolchain"
}
if ($AndroidAbi -ne 'arm64-v8a') {
    throw "This PhysX package currently supports ANDROID_ABI=arm64-v8a, not $AndroidAbi."
}

& (Join-Path $ScriptRoot 'apply-physx-5.9-patches.ps1')

New-Item -ItemType Directory -Force -Path $BuildDirectory | Out-Null

Write-Host 'Configuring PhysX 5.9: Android arm64 Release, shared CPU runtime, static Vehicle/PVD...'
$ConfigureArguments = @(
    '-S', $SourceDirectory,
    '-B', $BuildDirectory,
    '-G', 'Ninja',
    "-DCMAKE_TOOLCHAIN_FILE=$Toolchain",
    "-DANDROID_ABI=$AndroidAbi",
    "-DANDROID_PLATFORM=$AndroidPlatform",
    "-DANDROID_STL=$AndroidStl",
    '-DCMAKE_BUILD_TYPE=Release',
    "-DCMAKE_C_FLAGS_RELEASE=$AndroidCFlags",
    "-DCMAKE_CXX_FLAGS_RELEASE=$AndroidCppFlags",
    "-DCMAKE_SHARED_LINKER_FLAGS=$AndroidLdFlags",
    '-DPX_GENERATE_GPU_PROJECTS=OFF',
    '-DPX_GENERATE_GPU_STATIC_LIBRARIES=OFF',
    '-DPX_GENERATE_STATIC_LIBRARIES=OFF',
    '-DPX_BUILDSNIPPETS=OFF',
    '-DPX_BUILDPVDRUNTIME=OFF')
& cmake @ConfigureArguments
if ($LASTEXITCODE -ne 0) { throw 'Android PhysX CMake configuration failed.' }

& cmake --build $BuildDirectory --parallel
if ($LASTEXITCODE -ne 0) { throw 'Android PhysX build failed.' }

New-Item -ItemType Directory -Force -Path $PackageIncludes, $PackageLibraries | Out-Null
Copy-Item -Path (Join-Path $SourceDirectory 'include/*') -Destination $PackageIncludes -Recurse -Force
Copy-Item -Path (Join-Path $SourceLibraries '*.so') -Destination $PackageLibraries -Force
Copy-Item -Path (Join-Path $SourceLibraries '*.a') -Destination $PackageLibraries -Force

$RequiredArtifacts = @(
    'libPhysX_64.so',
    'libPhysXCommon_64.so',
    'libPhysXFoundation_64.so',
    'libPhysXCooking_64.so',
    'libPhysXExtensions_static_64.a',
    'libPhysXPvdSDK_static_64.a',
    'libPhysXVehicle_static_64.a')
foreach ($Artifact in $RequiredArtifacts) {
    if (-not (Test-Path -LiteralPath (Join-Path $PackageLibraries $Artifact))) {
        throw "Required Android PhysX artifact was not packaged: $Artifact"
    }
}

Set-Content -LiteralPath (Join-Path $PackageLibraries '.pvd-disabled') -Value 'PhysX 5.9 Android Release built with PX_SUPPORT_PVD=0'
$ObsoleteMarker = Join-Path $PackageLibraries '.pvd-enabled'
if (Test-Path -LiteralPath $ObsoleteMarker) {
    Remove-Item -LiteralPath $ObsoleteMarker -Force
}
Write-Host 'Finished building and packaging PhysX 5.9 for Android arm64.'
