cmake_minimum_required(VERSION 3.15)

project(physx-sys)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

set(PHYSX_CONFIG "vc17win64")
set(PHYSX_BIN "win.x86_64.vc143.mt/release")
set(PHYSX_SDK "D:/Development/Library/PhysX-104.2-physx-5.1.3/physx")
set(PHYSX_SDK_INCLUDE "${PHYSX_SDK}/install/${PHYSX_CONFIG}/PhysX/include")
set(PHYSX_SDK_LIB "${PHYSX_SDK}/bin/${PHYSX_BIN}")

message(STATUS "MY_PATH: ${PHYSX_SDK_LIB}")


set(SOURCES
    physx_api.cpp
	structgen/structgen.cpp
)

add_library(MainLib SHARED ${SOURCES})

target_include_directories(MainLib PUBLIC 
    ${PHYSX_SDK_INCLUDE}
    ${CMAKE_CURRENT_SOURCE_DIR}/generated/x86_64-pc-windows-msvc
)

file(GLOB LIB_FILES "${PHYSX_SDK_LIB}/*.lib")


target_link_libraries(MainLib PUBLIC ${LIB_FILES})

set_target_properties(MainLib PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
set_target_properties(MainLib PROPERTIES OUTPUT_NAME "physxnative")