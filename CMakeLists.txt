cmake_minimum_required(VERSION 3.20)
project(OpenRBX2014 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

if(MSVC)
    # Match Roblox 2014 MSVC 11.0 Release/RelWithDebInfo codegen flags:
    # /O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /fp:precise /Zc:wchar_t /Zc:forScope
    add_compile_options(/O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /fp:precise /Zc:wchar_t /Zc:forScope /W3)
    add_link_options(/DEBUG /OPT:REF /OPT:ICF /BASE:0x00400000 /DYNAMICBASE:NO)
endif()

include_directories(
    ${CMAKE_SOURCE_DIR}/util
    ${CMAKE_SOURCE_DIR}/Client/Base/include
    ${CMAKE_SOURCE_DIR}/Client/App/include
    ${CMAKE_SOURCE_DIR}/Client/Rendering/G3D/include
)

file(GLOB_RECURSE CLIENT_SOURCES
    "${CMAKE_SOURCE_DIR}/Client/*.cpp"
    "${CMAKE_SOURCE_DIR}/Client/*.c"
)

add_executable(RobloxStudioBeta ${CLIENT_SOURCES})
