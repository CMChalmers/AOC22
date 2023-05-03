cmake_minimum_required(VERSION 3.25)
project(AdventOfCode C)

set(CMAKE_C_STANDARD 11)

add_executable(AdventOfCode main.c day1/day1.c day1/day1.h algorithms/sorting/sorting.c algorithms/sorting/sorting.h day2/day2.c day2/day2.h day3/day3.c day3/day3.h)
