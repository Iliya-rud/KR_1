cmake_minimum_required(VERSION 3.1)

project(KR_1)

include_directories(${PROJECT_SOURCE_DIR})

set (KR_1_SRC  main.cpp autotest.cpp CComplVect.cpp CComplNumb.cpp input.cpp raschet.cpp )
set (KR_1_HDR  header.h)

add_executable (${PROJECT_NAME} ${KR_1_SRC} ${KR_1_HDR})