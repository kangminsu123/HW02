#include "Monster.h"
#include "Player.h" 

Monster::Monster(std::string name) : name(name) {
    HP = 100; power = 60; defence = 50; speed = 10;
}

void Monster::attack(Player* player) {
    
    int damage = this->power - player->getDefence();
    if (damage <= 0) damage = 1;

    std::cout << name << "의 공격! " << player->getNickname()
        << "에게 " << damage << "의 피해를 입혔다!" << std::endl;

    // 플레이어 HP 갱신
    int remainHP = player->getHP() - damage;
    player->setHP(remainHP);

    if (player->getHP() > 0) {
        std::cout << player->getNickname() << "의 남은 HP: " << player->getHP() << std::endl;
    }
    else {
        std::cout << player->getNickname() << "님이 쓰러졌습니다..." << std::endl;
    }
}
