cmake_minimum_required(VERSION 3.20)

project(webrtc-audio-processing-test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(WEBRTC_APM REQUIRED IMPORTED_TARGET webrtc-audio-processing-2)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE PkgConfig::WEBRTC_APM)