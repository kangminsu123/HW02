#pragma once
#ifndef THIEF_H
#define THIEF_H

#include "Player.h"

class Thief : public Player {
public:
    Thief(std::string name) : Player(name) {
        job_name = "도적";
        speed = 200;
    }
    void attack() override;
    void attack(Monster* monster);
};

#endif
