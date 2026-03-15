#include "Warrior.h"
Warrior::Warrior(string name,int health,int power, int armorRating): Hero(name,health,power) {
    this->armorRating = armorRating;
}
int Warrior::getArmorRating() const {
    return armorRating;
}
int Warrior::calculateEffectiveHealth() const {
    return getHealth() + (armorRating * 2);
}


