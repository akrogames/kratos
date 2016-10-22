cmake_minimum_required(VERSION 3.5)
project(Kratos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

message("Processing ${PROJECT_NAME}")

set(EXECUTABLE_OUTPUT_PATH bin)

# Link source files
file(
        GLOB_RECURSE
        source_files
        src/source/*
        src/include/*
)

# Link include files
include_directories("src/include")


# Executable declaration
add_executable(${PROJECT_NAME} ${source_files})
add_library(kratos SHARED ${source_files})
