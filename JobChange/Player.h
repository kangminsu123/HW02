#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include "Monster.h"

class Monster;


class Player {
protected:
    std::string nickname;
    std::string job_name;
    int level = 1;
    int HP, MP, power, defence, accuracy, speed;

public:
    virtual ~Player();
    virtual void attack() = 0;
    Player(std::string name);

    virtual void attack(Monster* monster) = 0;

    void printPlayerStatus();
    std::string getNickname() { return nickname; }

    int getHP() const { return HP; }
    int getMP() const { return MP; }
    int getPower() const { return power; }
    int getDefence() const { return defence; }
    int getAccyracy() const { return accuracy; }
    int getSpeed() const { return speed; }

    void setHP(int HP) { this->HP = HP; }
    void setMP(int MP) { this->MP = MP; }
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setAeeuracy(int accuracy) { this->accuracy = accuracy; }
    void setSpeed(int speed) { this->speed = speed; }
};

#endif