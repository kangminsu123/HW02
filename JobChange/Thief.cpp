#include<iostream>
#include "Thief.h"

void Thief::attack() {
	std::cout << "표창을 던집니다!!" << std::endl;
}
void Thief::attack(Monster* monster) {

    int damage = (power - monster->getDefence()) / 5;


    if (damage <= 0) damage = 1;


    for (int i = 0; i < 5; i++) {
        std::cout << monster->getName() << "에게 표창으로 " << damage << "의 피해를 입혔다!" << std::endl;
    }


    monster->setHP(monster->getHP() - (damage * 5));

    if (monster->getHP() > 0) {
        std::cout << monster->getName() << "의 남은 HP: " << monster->getHP() << std::endl;
    }
    else {
        std::cout << "승리! " << monster->getName() << "를 처치했습니다!" << std::endl;
    }
}