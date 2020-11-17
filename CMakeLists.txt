cmake_minimum_required(VERSION 3.15)
set(CMAKE_AUTOMOC ON)
project(qt-pimpl-example)
find_package(Qt5 REQUIRED COMPONENTS Core)
set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/out)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

if (Qt5_FOUND)
    message("found Qt5")
else ()
    message(FATAL_ERROR "not found Qt5")
endif ()

add_executable(test_pimpl
        test_pimpl.cpp
        Animal.cpp
        Animal.hpp
        Animal_p.hpp
        Bird.cpp
        Bird.hpp
        Dog.cpp
        Dog.hpp
        Pimpl.hpp)

target_link_libraries(test_pimpl
        Qt5::Core)
set(COMPILE_COMMANDS_FILE ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json)
if (EXISTS ${COMPILE_COMMANDS_FILE})
    file(COPY ${COMPILE_COMMANDS_FILE} DESTINATION ${CMAKE_SOURCE_DIR})
endif ()
