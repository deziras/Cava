cmake_minimum_required(VERSION 3.7)
project(Cava)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp library.cpp library.h include/java/lang/Object.cpp include/java/lang/Object.h include/java/lang/Predef.h include/java/lang/Class.cpp include/java/lang/Class.h)
add_library(Cava SHARED ${SOURCE_FILES} main.cpp)

include_directories(./include)
add_executable(Test ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "-fpermissive")
