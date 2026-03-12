#include <iostream>



int walk(int steps) {
    std::cout << "Walking " << steps << " steps." << std::endl;
    return steps;
}

float physical_attack(float power, float enemy_defense) {
    float damage = power - enemy_defense;
    std::cout << "Physical attack deals " << damage << " damage." << std::endl;
    return damage;
}


float magic_attack(float power, float range, float enemy_defense) {
    float damage = power * (1.0f - enemy_defense / 100.0f);
    std::cout << "Magic attack deals " << damage << " damage within " << range << " meters." << std::endl;
    return damage;
}

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

int main() {

    someData();

    float damage = physical_attack(100.0f, 20.0f);
    damage += magic_attack(100.0f, 5.0f, 20.0f);
    std::cout << "Final damage dealt: " << damage << std::endl;

    walk(250);

    return 0;
}