#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
public:
    Warrior(std::string name) : Player(name) {
        job_name = "전사";
        HP = 200;
        MP = 50;
        defence = 150;
        speed = 50;
    }
    void attack() override;
    void attack(Monster* monster);
};

#endif
