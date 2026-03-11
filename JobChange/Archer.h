#pragma once
#ifndef ARCHER_H
#define ARCHER_H

#include "Player.h"

class Archer : public Player {
public:
   Archer(std::string name) : Player(name) {
        job_name = "궁수";
        defence = 50;
        accuracy = 150;

      

   }
    void attack() override;
    void attack(Monster* monster);
};

#endif

