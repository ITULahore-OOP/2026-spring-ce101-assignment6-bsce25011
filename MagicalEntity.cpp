#include "MagicalEntity.h"
MagicalEntity::MagicalEntity(string name, int health, int power, int spellPower)
    : Hero(name, health, power) {
    this->spellPower = spellPower;
}
int MagicalEntity::getSpellPower() const {
    return spellPower;
}