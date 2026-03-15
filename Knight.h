#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"
class Knight :  public Warrior {
private:
    int chargeBonus;
public:
    Knight(string name = "",int health = 0,int power = 0,int armorRating = 0, int chargeBonus = 0 );
    int getChargeBonus() const;
    int calculateBurstDamage() const;
};
#endif

