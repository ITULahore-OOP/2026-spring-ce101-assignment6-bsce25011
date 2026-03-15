#include "Knight.h"
Knight::Knight(string name, int health, int power,int armorRating,int chargeBonus) : Warrior(name, health,power,armorRating) {
    this->chargeBonus = chargeBonus;
}
int Knight::getChargeBonus() const {
    return chargeBonus;
}
int Knight::calculateBurstDamage() const {
    return getPower() + chargeBonus;
}