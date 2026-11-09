cmake_minimum_required(VERSION 3.15)
project(OpenRBX2014 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)

if(MSVC)
    # Match August 20, 2014 RobloxStudioBeta.exe (0.164.0.50577) Release x86 flags
    add_compile_options(/O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /fp:precise /W0 /bigobj)
    add_link_options(/OPT:REF /OPT:ICF /SUBSYSTEM:WINDOWS /MACHINE:X86)
endif()

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/util
    ${CMAKE_CURRENT_SOURCE_DIR}/Client
)

file(GLOB_RECURSE CLIENT_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/Client/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/Client/*.c"
)

add_executable(RobloxStudioBeta ${CLIENT_SOURCES})
