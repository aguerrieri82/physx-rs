[CmdletBinding()]
param(
    [string] $BuildDirectory,
    [string] $PackageDirectory
)

$ErrorActionPreference = 'Stop'
$ScriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path

if (-not $BuildDirectory) {
    $BuildDirectory = Join-Path $ScriptRoot 'build/windows-x64-release-ninja'
}

if (-not $PackageDirectory) {
    $PackageDirectory = Join-Path $ScriptRoot '../../../libs/physx-590'
}

$BuildDirectory = [System.IO.Path]::GetFullPath($BuildDirectory)
$PackageDirectory = [System.IO.Path]::GetFullPath($PackageDirectory)
$SourceDirectory = Join-Path $ScriptRoot 'physx/physx'
$PhysXProject = Join-Path $SourceDirectory 'CMakeLists.txt'
$SourceLibraries = Join-Path $SourceDirectory 'lib/bin/win.x86_64.vc143.md/release'
$PackageIncludes = Join-Path $PackageDirectory 'include'
$PackageLibraries = Join-Path $PackageDirectory 'bin/win64-mt/release'

if (-not (Test-Path -LiteralPath $PhysXProject)) {
    throw 'The PhysX submodule is missing. Run git submodule update --init --recursive first.'
}

if (-not (Get-Command cmake -ErrorAction SilentlyContinue)) {
    throw "Required build tool 'cmake' was not found in PATH."
}

& (Join-Path $ScriptRoot 'apply-physx-5.9-patches.ps1')

New-Item -ItemType Directory -Force -Path $BuildDirectory | Out-Null

Write-Host 'Configuring PhysX 5.9: Windows x64 Release, shared libraries, CPU only...'
& cmake -S $SourceDirectory -B $BuildDirectory -G Ninja `
    '-DCMAKE_BUILD_TYPE=Release' `
    '-DPX_GENERATE_GPU_PROJECTS=OFF' `
    '-DPX_GENERATE_GPU_STATIC_LIBRARIES=OFF' `
    '-DPX_GENERATE_STATIC_LIBRARIES=OFF' `
    '-DPX_BUILDSNIPPETS=OFF' `
    '-DPX_BUILDPVDRUNTIME=OFF' `
    '-DNV_USE_STATIC_WINCRT=OFF'
if ($LASTEXITCODE -ne 0) { throw 'CMake configuration failed.' }

Write-Host 'Building PhysX Release libraries...'
& cmake --build $BuildDirectory --parallel
if ($LASTEXITCODE -ne 0) { throw 'PhysX build failed.' }

if (-not (Test-Path -LiteralPath $SourceLibraries)) {
    throw "PhysX output directory was not created: $SourceLibraries"
}

Write-Host "Packaging PhysX 5.9 under $PackageDirectory..."
New-Item -ItemType Directory -Force -Path $PackageIncludes, $PackageLibraries | Out-Null
Copy-Item -Path (Join-Path $SourceDirectory 'include/*') -Destination $PackageIncludes -Recurse -Force
Copy-Item -Path (Join-Path $SourceLibraries '*.dll') -Destination $PackageLibraries -Force
Copy-Item -Path (Join-Path $SourceLibraries '*.lib') -Destination $PackageLibraries -Force

$RequiredArtifacts = @(
    'PhysX_64.dll',
    'PhysXCommon_64.dll',
    'PhysXFoundation_64.dll',
    'PhysXCooking_64.dll',
    'PhysXExtensions_static_64.lib',
    'PhysXPvdSDK_static_64.lib',
    'PhysXVehicle_static_64.lib'
)

foreach ($Artifact in $RequiredArtifacts) {
    if (-not (Test-Path -LiteralPath (Join-Path $PackageLibraries $Artifact))) {
        throw "Required PhysX artifact was not packaged: $Artifact"
    }
}

Set-Content -LiteralPath (Join-Path $PackageLibraries '.pvd-enabled') -Value 'PhysX 5.9 Release built with PX_SUPPORT_PVD=1'

Write-Host 'Finished building and packaging PhysX 5.9.'
