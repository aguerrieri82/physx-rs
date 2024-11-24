cmake_minimum_required(VERSION 3.15)

project(physx-sys)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PHYSX_SDK "../../../../libs/physx-141")
set(PHYSX_SDK_INCLUDE "${PHYSX_SDK}/include")
	
if (ANDROID_ABI STREQUAL  "arm64-v8a")

	set(PHYSX_SDK_LIB "${PHYSX_SDK}/bin/android-arm64/release")
	
	set(STRUCT_NAME "unix")

else()

	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

	set(PHYSX_SDK_LIB "${PHYSX_SDK}/bin/win64-mt/release")
	
	set(STRUCT_NAME "x86_64-pc-windows-msvc")

endif()

set(SOURCES
    physx_api.cpp
	structgen/structgen.cpp
)
	
file(GLOB LIB_FILES 
	"${PHYSX_SDK_LIB}/*.a"
	"${PHYSX_SDK_LIB}/*.lib"
	"${PHYSX_SDK_LIB}/*.so")

add_library(MainLib SHARED ${SOURCES})

target_include_directories(MainLib PUBLIC 
    ${PHYSX_SDK_INCLUDE}
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/${STRUCT_NAME}
)

target_link_libraries(MainLib PUBLIC ${LIB_FILES})

set_target_properties(MainLib PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
set_target_properties(MainLib PROPERTIES OUTPUT_NAME "physxnative")