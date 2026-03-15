#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include "Hero.h"
class MagicalEntity : public Hero {
    private:
    int spellPower;
    public:
    MagicalEntity(string name = "",int health = 0, int power = 0, int spellPower = 0);
    int getSpellPower() const;
};
#endif
