cmake_minimum_required(VERSION 2.8)

project(main)

#aux_source_directory(. SRC_LIST)

set(VECTOR_SRC main.cpp Create.cpp Fabric.cpp CVector.cpp Source.cpp CVectorHori.cpp CVectorVert.cpp AutoTest.cpp data.txt)
set(VECTOR_HDR Create.h Fabric.h CVector.h Source.h CVectorHori.h CVectorVert.h)

#add_executable(${PROJECT_NAME} ${SRC_LIST})
#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})
add_executable(${PROJECT_NAME} ${VECTOR_SRC} ${VECTOR_HDR})

#target_link_libraries(${PROJECT_NAME} vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")