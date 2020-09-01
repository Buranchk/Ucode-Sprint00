cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_STANDARD 17)

project(t06)

add_executable(meadSong main.cpp meadSong.cpp)
set_target_properties(meadSong PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")