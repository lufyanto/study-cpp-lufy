cmake_minimum_required(VERSION 3.14)

project(TASK_ENGINE_PROJECT VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 0N)

add_library(TaskCore STATIC
    core/src/TaskManager.cpp
)

target_include_directories(TaskCore PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/core/include
)

add_executable(TaskApp app/main.cpp)
target_link_libraries(TaskApp PRIVATE TaskCore)

