cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "/home/alexen/devel/cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -Wpedantic -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -gdwarf-2")

find_package(XercesC 3.0 REQUIRED)

add_executable(using_xerces
    src/main.cpp
)

target_link_libraries(using_xerces
    ${XERCESC_LIBRARY} 
)