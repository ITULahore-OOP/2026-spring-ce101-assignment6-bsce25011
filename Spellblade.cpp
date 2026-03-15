#include "Spellblade.h"
Spellblade::Spellblade(string name, int health, int power, int armorRating, int spellPower)
    : Warrior(name, health, power, armorRating),
      MagicalEntity(name, health, power, spellPower) {
}
int Spellblade::calculateHybridDamage()const {
    return Warrior::getPower() + getSpellPower();
}