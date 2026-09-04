[CmdletBinding()]
param()

$ErrorActionPreference = 'Stop'
$ScriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
$PhysXRoot = Join-Path $ScriptRoot 'physx/physx'

function Update-PhysXFile {
    param(
        [Parameter(Mandatory)] [string] $RelativePath,
        [Parameter(Mandatory)] [string] $Original,
        [Parameter(Mandatory)] [AllowEmptyString()] [string] $Replacement
    )

    $Path = Join-Path $PhysXRoot $RelativePath
    $Text = [System.IO.File]::ReadAllText($Path)
    if ($Text.Contains($Replacement)) {
        return
    }
    if (-not $Text.Contains($Original)) {
        throw "PhysX 5.9 patch context was not found in $RelativePath"
    }
    [System.IO.File]::WriteAllText($Path, $Text.Replace($Original, $Replacement))
}

Update-PhysXFile 'source/compiler/cmake/linux/PhysXFoundation.cmake' @'
	SET(PHYSXFOUNDATION_PLATFORM_LINKED_LIBS rt)
'@ @'
	IF(NOT ANDROID)
		SET(PHYSXFOUNDATION_PLATFORM_LINKED_LIBS rt)
	ENDIF()
'@

Update-PhysXFile 'source/compiler/cmake/linux/PhysXFoundation.cmake' '${PHYSX_ROOT_DIR}/include/foundation/linux' '${PHYSX_ROOT_DIR}/include/foundation/unix'
Update-PhysXFile 'source/compiler/cmake/linux/PhysXFoundation.cmake' 'SET(PXFOUNDATION_PLATFORM_LINK_FLAGS "-m64")' @'
IF(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
	SET(PXFOUNDATION_PLATFORM_LINK_FLAGS "")
ELSE()
	SET(PXFOUNDATION_PLATFORM_LINK_FLAGS "-m64")
ENDIF()
'@

$InvalidLinuxIncludes = @{
    'source/compiler/cmake/linux/PhysXCommon.cmake' = @('${PHYSX_SOURCE_DIR}/common/src/linux')
    'source/compiler/cmake/linux/LowLevelDynamics.cmake' = @(
        '${PHYSX_SOURCE_DIR}/common/src/linux',
        '${PHYSX_SOURCE_DIR}/lowlevel/software/include/linux',
        '${PHYSX_SOURCE_DIR}/lowleveldynamics/include/linux',
        '${PHYSX_SOURCE_DIR}/lowlevel/common/include/pipeline/linux')
    'source/compiler/cmake/linux/SimulationController.cmake' = @(
        '${PHYSX_SOURCE_DIR}/common/src/linux',
        '${PHYSX_SOURCE_DIR}/lowlevel/linux/include')
    'source/compiler/cmake/linux/SceneQuery.cmake' = @('PRIVATE ${PHYSX_SOURCE_DIR}/Common/src/linux')
    'source/compiler/cmake/linux/PhysXExtensions.cmake' = @('PRIVATE ${PHYSX_SOURCE_DIR}/Common/src/linux')
    'source/compiler/cmake/linux/LowLevelAABB.cmake' = @(
        '${PHYSX_SOURCE_DIR}/Common/src/linux',
        '${PHYSX_SOURCE_DIR}/LowLevelAABB/linux/include')
    'source/compiler/cmake/linux/LowLevel.cmake' = @(
        '${PHYSX_SOURCE_DIR}/Common/src/linux',
        '${PHYSX_SOURCE_DIR}/LowLevel/software/include/linux',
        '${PHYSX_SOURCE_DIR}/LowLevelDynamics/include/linux',
        '${PHYSX_SOURCE_DIR}/LowLevel/common/include/pipeline/linux')
    'source/compiler/cmake/PhysXPvdSDK.cmake' = @('PRIVATE ${PHYSX_SOURCE_DIR}/filebuf/include')
    'source/compiler/cmake/PhysX.cmake' = @(
        'PRIVATE ${PHYSX_SOURCE_DIR}/immediatemode/include',
        'PRIVATE ${PHYSX_SOURCE_DIR}/omnipvd')
}

foreach ($Entry in $InvalidLinuxIncludes.GetEnumerator()) {
    foreach ($Include in $Entry.Value) {
        Update-PhysXFile $Entry.Key $Include ''
    }
}

Update-PhysXFile 'source/compiler/cmake/linux/CMakeLists.txt' @'
SET(GCC_WARNINGS "-Wall -Werror \
'@ @'
IF(ANDROID)
	SET(CLANG_WARNINGS "${CLANG_WARNINGS} -Wno-error=format")
ENDIF()

SET(GCC_WARNINGS "-Wall -Werror \
'@

Update-PhysXFile 'source/compiler/cmake/linux/CMakeLists.txt' @'
SET(PHYSX_LINUX_RELEASE_COMPILE_DEFS "NDEBUG;PX_SUPPORT_PVD=0;PX_SUPPORT_OMNI_PVD=0" CACHE INTERNAL "Release PhysX preprocessor definitions")
'@ @'
IF(ANDROID)
	SET(PHYSX_LINUX_RELEASE_COMPILE_DEFS "NDEBUG;PX_SUPPORT_PVD=0;PX_SUPPORT_OMNI_PVD=0" CACHE INTERNAL "Release PhysX preprocessor definitions")
ELSE()
	SET(PHYSX_LINUX_RELEASE_COMPILE_DEFS "NDEBUG;PX_SUPPORT_PVD=1;PX_SUPPORT_OMNI_PVD=0" CACHE INTERNAL "Release PhysX preprocessor definitions")
ENDIF()
'@

Update-PhysXFile 'source/compiler/cmake/windows/CMakeLists.txt' @'
SET(PHYSX_WINDOWS_RELEASE_COMPILE_DEFS "PX_SUPPORT_PVD=0;PX_SUPPORT_OMNI_PVD=0" CACHE INTERNAL "Release PhysX preprocessor definitions")
'@ @'
SET(PHYSX_WINDOWS_RELEASE_COMPILE_DEFS "PX_SUPPORT_PVD=1;PX_SUPPORT_OMNI_PVD=0" CACHE INTERNAL "Release PhysX preprocessor definitions")
'@

Update-PhysXFile 'CMakeLists.txt' @'
set(PHYSX_LIBS "")
'@ @'
set(PHYSX_LIBS "")

# Android consumers link the static extension libraries into their own shared
# libraries. Those extensions reference core implementation symbols, so the
# shared CPU runtime must expose them on this platform.
if(ANDROID AND NOT PX_GENERATE_STATIC_LIBRARIES)
  foreach(lib IN ITEMS PhysX PhysXCommon PhysXCooking PhysXFoundation LowLevel LowLevelAABB LowLevelDynamics PhysXTask SceneQuery SimulationController)
    if(TARGET ${lib})
      target_compile_options(${lib} PRIVATE -fvisibility=default)
    endif()
  endforeach()
endif()
'@

Update-PhysXFile 'source/foundation/unix/FdUnixMutex.cpp' @'
PX_FORCE_INLINE bool isLegalProtocol(const int mutexProtocol)
{
	return
	(
		(PTHREAD_PRIO_NONE == mutexProtocol) ||
		(PTHREAD_PRIO_INHERIT == mutexProtocol) ||
		((PTHREAD_PRIO_PROTECT == mutexProtocol) &&  ((sched_getscheduler(0) == SCHED_FIFO) || (sched_getscheduler(0) == SCHED_RR)))
	);
}
'@ @'
PX_FORCE_INLINE bool isLegalProtocol(const int mutexProtocol)
{
	#if defined(__ANDROID__)
	return (PTHREAD_PRIO_NONE == mutexProtocol) || (PTHREAD_PRIO_INHERIT == mutexProtocol);
	#else
	return
	(
		(PTHREAD_PRIO_NONE == mutexProtocol) ||
		(PTHREAD_PRIO_INHERIT == mutexProtocol) ||
		((PTHREAD_PRIO_PROTECT == mutexProtocol) &&  ((sched_getscheduler(0) == SCHED_FIFO) || (sched_getscheduler(0) == SCHED_RR)))
	);
	#endif
}
'@

Update-PhysXFile 'source/foundation/unix/FdUnixMutex.cpp' @'
	pthread_mutexattr_setprotocol(&attr, gMutexProtocol);
	pthread_mutexattr_setprioceiling(&attr, 0);
'@ @'
	pthread_mutexattr_setprotocol(&attr, gMutexProtocol);
	#if !defined(__ANDROID__)
	pthread_mutexattr_setprioceiling(&attr, 0);
	#endif
'@

Update-PhysXFile 'source/foundation/unix/FdUnixThread.cpp' @'
#if !PX_APPLE_FAMILY && !defined(__CYGWIN__) && !PX_EMSCRIPTEN
#include <bits/local_lim.h> // PTHREAD_STACK_MIN
'@ @'
#if !PX_APPLE_FAMILY && !defined(__CYGWIN__) && !PX_EMSCRIPTEN && !defined(__ANDROID__)
#include <bits/local_lim.h> // PTHREAD_STACK_MIN
'@

Update-PhysXFile 'source/foundation/unix/FdUnixThread.cpp' @'
void PxThreadImpl::kill()
{
	if(getThread(this)->state == ePxThreadStarted)
		pthread_cancel(getThread(this)->thread);
	getThread(this)->state = ePxThreadStopped;
}
'@ @'
void PxThreadImpl::kill()
{
	#if defined(__ANDROID__)
	if(getThread(this)->state == ePxThreadStarted)
	{
		signalQuit();
		waitForQuit();
	}
	#else
	if(getThread(this)->state == ePxThreadStarted)
		pthread_cancel(getThread(this)->thread);
	getThread(this)->state = ePxThreadStopped;
	#endif
}
'@

Write-Host 'PhysX 5.9 compatibility patches are applied.'
