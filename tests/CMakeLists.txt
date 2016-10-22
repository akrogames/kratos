cmake_minimum_required(VERSION 3.5)
project(Kratos_Tests)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link source files
file(
        GLOB_RECURSE
        source_files
        ./src/*
)

# Link include files
include_directories("../src/include")

find_library(/home/akrogames/Dev/DevCpp/Kratos/build/Release/ kratos)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(${PROJECT_NAME} ${source_files})
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} pthread)
target_link_libraries(${PROJECT_NAME} /home/akrogames/Dev/DevCpp/Kratos/build/Release/libkratos.so)

