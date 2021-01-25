cmake_minimum_required(VERSION 3.19)

project(FOOBAR LANGUAGES CXX)

add_executable(baz main.cpp)

target_compile_definitions(baz PRIVATE
    HELLO_WORLD=42
)
