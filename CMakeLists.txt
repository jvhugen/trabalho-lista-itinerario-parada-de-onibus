cmake_minimum_required(VERSION 3.10)
project(Itinerario)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(main
    main.cpp
    src/linked_list.cpp
)

add_executable(tests
    tests/tests.cpp
    src/linked_list.cpp
)