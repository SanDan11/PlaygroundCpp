#include "data.hpp"
#include <iostream>

int someData() {
    char c = 'C';
    wchar_t wc = L'W';
    int i = 92;
    bool isOninline = true;
    float f = 3.14f;
    double d = 3.14159265358979323846;
    void *ptr = nullptr;
    
    std::cout << "char: " << c << std::endl;
    std::cout << "wchar_t: " << wc << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "bool: " << isOninline << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
    std::cout << "void*: " << ptr << std::endl;

    return 0;
}