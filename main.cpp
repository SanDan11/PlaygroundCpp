#include <iostream>

#include "include/npc.hpp"
#include "include/data.hpp"


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


int main() {

    someData();

    float damage = physical_attack(100.0f, 20.0f);
    damage += magic_attack(100.0f, 5.0f, 20.0f);
    std::cout << "Final damage dealt: " << damage << std::endl;

    walk(250);

    return 0;
}