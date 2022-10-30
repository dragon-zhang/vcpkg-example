cmake_minimum_required(VERSION 3.19)
set(CMAKE_TOOLCHAIN_FILE "/opt/homebrew/Cellar/vcpkg/2022.02.01/bin/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "Vcpkg toolchain file")
project(vcpkg_example)

set(CMAKE_CXX_STANDARD 11)

find_package(fmt CONFIG REQUIRED)
add_executable(vcpkg_example main.cpp)
target_link_libraries(vcpkg_example PRIVATE fmt::fmt)