[CmdletBinding()]
param(
    [Parameter(Mandatory)] [string] $GeneratedDirectory,
    [Parameter(Mandatory)] [string] $OutputDirectory
)

$ErrorActionPreference = 'Stop'
$GeneratedDirectory = [System.IO.Path]::GetFullPath($GeneratedDirectory)
$OutputDirectory = [System.IO.Path]::GetFullPath($OutputDirectory)
$BindingsDirectory = Join-Path $OutputDirectory 'bindings'
New-Item -ItemType Directory -Force -Path $OutputDirectory, $BindingsDirectory | Out-Null

Copy-Item (Join-Path $GeneratedDirectory 'bindings/physx_generated.hpp') $BindingsDirectory -Force
Copy-Item (Join-Path $GeneratedDirectory 'bindings/physx_generated.rs') $BindingsDirectory -Force
Copy-Item (Join-Path $GeneratedDirectory 'structgen_out.hpp') $OutputDirectory -Force
Copy-Item (Join-Path $GeneratedDirectory 'structgen_out.rs') $OutputDirectory -Force

function Update-GeneratedFile {
    param([string] $Path, [string] $Original, [string] $Replacement)
    $Text = [System.IO.File]::ReadAllText($Path)
    if (-not $Text.Contains($Original)) {
        throw "Generated binding layout was not found in $Path"
    }
    [System.IO.File]::WriteAllText($Path, $Text.Replace($Original, $Replacement))
}

$Hpp = Join-Path $OutputDirectory 'structgen_out.hpp'
$Rs = Join-Path $OutputDirectory 'structgen_out.rs'

Update-GeneratedFile $Hpp "struct physx_PxSIMDGuard_Pod {`r`n    char structgen_pad0[8];`r`n};" "struct physx_PxSIMDGuard_Pod {`r`n    char structgen_pad0[1];`r`n};"
Update-GeneratedFile $Hpp 'struct physx_PxTriangleMeshPoissonSampler_Pod {`r`n    char structgen_pad0[24];`r`n};'.Replace('`r`n', "`r`n") 'struct physx_PxTriangleMeshPoissonSampler_Pod {`r`n    char structgen_pad0[8];`r`n};'.Replace('`r`n', "`r`n")
Update-GeneratedFile $Hpp "    void* userData;`r`n    char structgen_pad4[8];`r`n    float halfHeight;`r`n    float halfSideExtent;`r`n    float halfForwardExtent;`r`n    char structgen_pad5[4];" "    void* userData;`r`n    char structgen_pad4[4];`r`n    float halfHeight;`r`n    float halfSideExtent;`r`n    float halfForwardExtent;"
Update-GeneratedFile $Hpp "    void* userData;`r`n    char structgen_pad4[8];`r`n    float radius;`r`n    float height;`r`n    int32_t climbingMode;`r`n    char structgen_pad5[4];" "    void* userData;`r`n    char structgen_pad4[4];`r`n    float radius;`r`n    float height;`r`n    int32_t climbingMode;"

Update-GeneratedFile $Rs "pub struct PxSIMDGuard {`r`n    pub structgen_pad0: [u8; 8],`r`n}" "pub struct PxSIMDGuard {`r`n    pub structgen_pad0: [u8; 1],`r`n}"
Update-GeneratedFile $Rs "pub struct PxTriangleMeshPoissonSampler {`r`n    pub structgen_pad0: [u8; 24],`r`n}" "pub struct PxTriangleMeshPoissonSampler {`r`n    pub structgen_pad0: [u8; 8],`r`n}"
Update-GeneratedFile $Rs "    pub userData: *mut std::ffi::c_void,`r`n    pub structgen_pad4: [u8; 8],`r`n    pub halfHeight: f32,`r`n    pub halfSideExtent: f32,`r`n    pub halfForwardExtent: f32,`r`n    pub structgen_pad5: [u8; 4]," "    pub userData: *mut std::ffi::c_void,`r`n    pub structgen_pad4: [u8; 4],`r`n    pub halfHeight: f32,`r`n    pub halfSideExtent: f32,`r`n    pub halfForwardExtent: f32,"
Update-GeneratedFile $Rs "    pub userData: *mut std::ffi::c_void,`r`n    pub structgen_pad4: [u8; 8],`r`n    pub radius: f32,`r`n    pub height: f32,`r`n    pub climbingMode: PxCapsuleClimbingMode,`r`n    pub structgen_pad5: [u8; 4]," "    pub userData: *mut std::ffi::c_void,`r`n    pub structgen_pad4: [u8; 4],`r`n    pub radius: f32,`r`n    pub height: f32,`r`n    pub climbingMode: PxCapsuleClimbingMode,"
Update-GeneratedFile $Rs 'assert_eq!(size_of::<PxSIMDGuard>(), 8);' 'assert_eq!(size_of::<PxSIMDGuard>(), 1);'
Update-GeneratedFile $Rs 'assert_eq!(size_of::<PxBoxControllerDesc>(), 152);' 'assert_eq!(size_of::<PxBoxControllerDesc>(), 144);'
Update-GeneratedFile $Rs 'assert_eq!(size_of::<PxCapsuleControllerDesc>(), 152);' 'assert_eq!(size_of::<PxCapsuleControllerDesc>(), 144);'
Update-GeneratedFile $Rs 'assert_eq!(size_of::<PxTriangleMeshPoissonSampler>(), 24);' 'assert_eq!(size_of::<PxTriangleMeshPoissonSampler>(), 8);'

Write-Host "Generated Android arm64 binding layouts under $OutputDirectory"
