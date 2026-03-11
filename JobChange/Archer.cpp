#include<iostream>
#include "Archer.h"

void Archer::attack() {
	std::cout << "화살을쏩니다!!" << std::endl;
}
void Archer::attack(Monster* monster) {
    
    int damage = (power - monster->getDefence()) / 3;

    
    if (damage <= 0) damage = 1;

   
    for (int i = 0; i < 3; i++) {
        std::cout << monster->getName() << "에게 화살로 " << damage << "의 피해를 입혔다!" << std::endl;
    }

    
    monster->setHP(monster->getHP() - (damage * 3));

    if (monster->getHP() > 0) {
        std::cout << monster->getName() << "의 남은 HP: " << monster->getHP() << std::endl;
    }
    else {
        std::cout << "승리! " << monster->getName() << "를 처치했습니다!" << std::endl;
    }
}

