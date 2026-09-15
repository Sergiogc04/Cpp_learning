cmake_minimum_required(VERSION 3.20)
project(proyecto CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main main.cpp)
target_compile_options(main PRIVATE -Wall -Wextra -Werror)
target_compile_options(main PRIVATE -fsanitize=address,undefined)
target_link_options(main PRIVATE -fsanitize=address,undefined)
