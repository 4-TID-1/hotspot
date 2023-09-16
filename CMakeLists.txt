cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Hotspot)

file(GLOB SOURCE_FILES "src/*/sources/*.cpp")

add_executable(main src/main.cpp ${SOURCE_FILES})

target_include_directories(
    main

    PUBLIC src/classes/headers
)
