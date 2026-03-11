#include<iostream>
#include "Warrior.h"
#include "Monster.h"

void Warrior::attack() {

	std::cout << "검을 휘두릅니다!!" << std::endl;

}
void Warrior::attack(Monster* monster) {
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;

    std::cout << nickname << "의 강한 베기! " << monster->getName()
        << "에게 " << damage << "의 피해를 입혔다!" << std::endl;

    monster->setHP(monster->getHP() - damage);

    if (monster->getHP() > 0) {
        std::cout << monster->getName() << "의 남은 HP: " << monster->getHP() << std::endl;
    }
    else {
        std::cout << "승리! " << monster->getName() << "를 처치했습니다!" << std::endl;
    }
}
