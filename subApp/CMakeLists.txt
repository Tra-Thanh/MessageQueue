# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.20)

# Name of the project
project(subipc)

# Create a variable to store all source files
set(SOURCE_FILE
    main.cpp
    sources/foo.cpp
)

# Add all the source files needed to build the executable
add_executable(subipc ${SOURCE_FILE})