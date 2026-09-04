cmake_minimum_required(VERSION 3.14)

project(SECOND_CPP_PROJECT VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Target Library
add_library(StudentCore STATIC
    core/src/StudentManager.cpp
)

target_include_directories(StudentCore PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/core/include>
)

# Target Executable
add_executable(StudentApp
    app/main.cpp
)

target_link_libraries(StudentApp PRIVATE StudentCore)