#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
class Warrior : public Hero {
    private:
    int armorRating;
    public:
    Warrior(string name = "", int health = 0, int power = 0, int armorRating = 0);
   int getArmorRating() const;
    int calculateEffectiveHealth() const;
};
#endif