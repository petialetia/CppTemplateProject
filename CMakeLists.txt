#TODO: Change to your cmake project settings

cmake_minimum_required(VERSION 3.10) #TODO: Change to your cmake version

project(TemplateProject LANGUAGES CXX) #TODO: Change to your project name

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXECUTABLE_SUFFIX ".out")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_STATIC_LIBRARY_PREFIX "")
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

set(CMAKE_CXX_FLAGS_DEBUG "-fsanitize=undefined -fsanitize=address")

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(tests)
add_subdirectory(src)
