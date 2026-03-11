#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include <iostream>

class Player;

class Monster {
public:
    Monster(std::string name);

    void attack(Player* player);

    
    std::string getName() { return name; }
    int getHP() const { return HP; }
    int getPower() const { return power; }
    int getDefence() const { return defence; }
    int getSpeed() const { return speed; }

 
    void setName(std::string name) { this->name = name; }
    void setHP(int HP) { this->HP = HP; }
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setSpeed(int speed) { this->speed = speed; }

protected:
    std::string name;
    int HP, power, defence, speed;
};

#endif


