cmake_minimum_required(VERSION 3.10)

project(lowLevelPractice)

add_executable(LLCPP main.cpp)

add_executable(ClaudeWrote ReadingPractice/ConcurrencyClaudeDemo.cpp)

target_include_directories(LLCPP PRIVATE Include)
