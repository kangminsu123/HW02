#pragma once
#ifndef MAGICIAN_H
#define MAGICIAN_H

#include "Player.h"

class Magician : public Player {
public:
    Magician(std::string name) : Player(name) {
        job_name = "마법사";
        HP = 50;
        MP = 200;
        power = 150;
        defence = 50;

    }
    void attack() override;
    void attack(Monster* monster);
};

#endif

