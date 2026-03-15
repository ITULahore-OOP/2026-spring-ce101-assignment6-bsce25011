#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"
class Spellblade : public Warrior, public MagicalEntity {
    public:
    Spellblade(string name ="", int health =0, int power = 0, int armorRating=0, int spellPower =0);
    int calculateHybridDamage()const;
};
#endif