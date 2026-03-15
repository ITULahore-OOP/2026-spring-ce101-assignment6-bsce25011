#include "Hero.h"
Hero::Hero(string name, int health, int power) {
    this->name = name;
    this->health = health;
    this->power = power;
}
string Hero::getName() const {
    return name;
}
int Hero::getHealth() const {
    return health;
}
int Hero::getPower() const {
    return power;
}
void Hero::takeDamage(int damage) {
    health = health - damage;
    if (health < 0) {
        health = 0;
    }
}
bool Hero::operator>(const Hero &other) const {
    return power > other.power;
}
int Hero::operator+(const Hero &other) const {
    return health + other.health;
}