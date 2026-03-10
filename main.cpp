#include <iostream>

int main() {

    char c = 'C';
    wchar_t wc = L'W';
    int i = 92;
    
    std::cout << "char: " << c << std::endl;
    std::cout << L"wchar_t: " << wc << std::endl;
    std::cout << "int: " << i << std::endl;

    return 0;
}