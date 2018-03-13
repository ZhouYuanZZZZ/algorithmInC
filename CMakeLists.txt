cmake_minimum_required(VERSION 3.8)
project(algorithmInC)

set(CMAKE_C_STANDARD 99)

add_executable(algorithmInC
        common/utils.c
        main0.c
        sort/insertSort/insertSort.c
        common/utils.h
        serach/staticSerach.c
        sort/swapSort/swapSort.c
#        dataStruct/graph/basic/dg/list_dg.c
#        dataStruct/graph/basic/dg/matrix_dg.c
        dataStruct/graph/basic/udg/list_udg.c
        dataStruct/graph/basic/udg/matrix_udg.c)