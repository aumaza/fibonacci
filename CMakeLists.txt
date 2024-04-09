cmake_minimum_required(VERSION 3.0)

project(fibonachi LANGUAGES C)

add_executable(fibonachi main.c ArrayList.c ArrayList.h fibo.h)

install(TARGETS fibonachi RUNTIME DESTINATION bin)
