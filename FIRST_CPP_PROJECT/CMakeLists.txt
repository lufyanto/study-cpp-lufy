cmake_minimum_required(VERSION 3.14)

project(FIRST_CPP_PROJECT VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Target Static Library
add_library(CoreEngine STATIC
    core/src/MathEngine.cpp
    core/src/StringProcessor.cpp
)

target_include_directories(CoreEngine PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/core/include>
)

# Target Executable Utama
add_executable(AppExec
    app/main.cpp
)

target_link_libraries(AppExec PRIVATE CoreEngine)