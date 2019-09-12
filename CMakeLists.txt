cmake_minimum_required(VERSION 3.14)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c "C files/estrutura_de_dados.c" Headers/estrutura_de_dados.h "C files/pegar_do_arquivo.c" Headers/pegar_do_arquivo.h)