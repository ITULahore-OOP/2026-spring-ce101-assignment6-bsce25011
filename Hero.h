#ifndef HERO_H
#define HERO_H
#include <string>
using namespace std;
class Hero {
    private:
    string name;
    int health;
    int power;
    public:
    Hero(string name = "", int health =0 , int power = 0);
    string getName()const;
    int getHealth()const;
    int getPower()const;
    void takeDamage(int damage);
    bool operator>(const Hero &other)const;
    int operator+(const Hero &other)const;
};
#endif