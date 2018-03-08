cmake_minimum_required(VERSION 3.8)
project(algorithmInC)

set(CMAKE_C_STANDARD 99)

add_executable(algorithmInC
        common/utils.c main0.c
        sort/insertSort/insertSort.c
        common/utils.h
        serach/staticSerach.c
        sort/swapSort/swapSort.c dataStruct/map/graphDef.c)