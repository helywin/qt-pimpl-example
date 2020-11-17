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