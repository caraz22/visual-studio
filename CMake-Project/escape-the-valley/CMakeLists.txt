cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Project name
project(escape-the-valley)

# Gather all .cpp and .h files
file(GLOB_RECURSE SRC_FILES "src/*.cpp")
file(GLOB HEADER_FILES "include/*/*.h")

# Add source files to this project's executable.
add_executable (escape-the-valley ${SRC_FILES})
target_sources(escape-the-valley PRIVATE ${HEADER_FILES})
target_include_directories(escape-the-valley PRIVATE include)