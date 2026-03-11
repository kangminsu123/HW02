#include<iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"

using namespace std;

int main()
{
	string job[4] = { "전사", "마법사", "도적", "궁수" };
	int choice = 0;
	string nickname;

	Player* player = nullptr;
	Monster* monster = nullptr;

	cout << "이름을 입력하세요 :";
	cin >> nickname;
	
	cout << "<전직시스템>" << endl;
	cout << nickname << "님 환영합니다!" << endl;
	cout << "원하시는 직업을 선택해주세요 :" << endl;

	for (int i = 0; i < 4; i++) {
		cout << (i + 1) << ". " << job[i] << endl;
	}

	cout << "선택: ";
	cin >> choice;

	switch (choice) {
	case 1:
		player = new Warrior(nickname);
		break;
	case 2:
		player = new Magician(nickname);
		break;
	case 3:
		player = new Thief(nickname);
		break;
	case 4:
		player = new Archer(nickname);
		break;
	default:
		cout << "잘못된 입력입니다." << endl;
		return 1;
	}

	monster = new Monster("슬라임");

	cout << "-----전투시작!-----" << endl;
	player->printPlayerStatus();

	cout << "[플레이어의 턴]" << endl;
	player->attack(monster);

	if (monster->getHP() > 0) {
		cout << "[몬스터의 턴]" << endl;
		monster->attack(player);
	}


	if (player != nullptr)
		delete player;
	if (monster != nullptr)
		delete monster;

	return 0;
}