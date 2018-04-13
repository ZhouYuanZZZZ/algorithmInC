cmake_minimum_required(VERSION 3.9)
project(algorithmInC C)

set(CMAKE_C_STANDARD 99)

add_executable(algorithmInC common/utils.c main0.c sort/insertSort/insertSort.c common/utils.h serach/staticSerach.c)