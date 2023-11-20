cmake_minimum_required(VERSION 3.22.1)

project(sort)

aux_source_directory(src SRC)

add_executable(sort ${SRC})