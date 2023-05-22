#include "11_과제1.h"
/*
과제 1. Getter + Setter 과제

- 자동 전투 게임을 만든다.

- 클래스는 5개 이상

- 플레이어 능력치는 7개 (필수 능력치 : 운)
ㄴ 운 능력치에 따라 크리티컬 발생

- 아이템 종류 3가지
ㄴ 대분류 : 무기, 방어구, 악세서리, 포션
ㄴ 중분류 : 대분류에 해당하는 항목당 아이템 2개씩
ㄴ 포션 : 수업 시간에 진행한 실습 내용들 포션으로 만든다.

- 플레이어 스킬 2개 이상 / 적 스킬은 1개 이상
ㄴ 스킬은 쿨타임 적용 시킨다.

- 도트는 기존에 만들어 둔 도트를 활용한다.

*/

AutoBattleGame::AutoBattleGame()
{
	enemy = new ABG_Enemy;
	player = new ABG_Player;
	
}

AutoBattleGame::~AutoBattleGame()
{
	delete enemy;
	delete player;
	for (int i = 0; i < 6; i++)
	{
		delete equipments[i];
	}
}

void AutoBattleGame::playGame()
{
	while (true)
	{
		//system("cls");
		// player의 speed가 enemy보다 빠를 경우 player선공
		if (enemy->getSpeed() < player->getSpeed())
		{
			// player 선공
			enemy->getDamage(player->attack());
			// enemy 사망
			if (enemy->getHP() <= 0)
			{
				enemy->setHP(0);
				break;
			}
			// enemy 후공
			int enemyAttack = enemy->attack();
			player->getDamage(enemyAttack % 100, enemyAttack / 100);
			if (player->getHP() <= 0)
			{
				player->setHP(0);
				break;
			}
		}
		// enemy의 speed가 player보다 빠를 경우 enemy선공
		else
		{
			// enemy 선공
			int enemyAttack = enemy->attack();
			player->getDamage(enemyAttack % 100, enemyAttack / 100);
			// 플레이어 사망
			if (player->getHP() <= 0)
			{
				player->setHP(0);
				break;
			}
			// player 후공
			enemy->getDamage(player->attack() - player->getDef());
			// enemy 사망
			if (enemy->getHP() <= 0)
			{
				enemy->setHP(0);
				break;
			}
		}
		cout << enemy->getHP() << endl;
		cout << player->getHP() << endl;
		cout << endl;
		Sleep(3000);
	}
	if (enemy->getHP() <= 0)
	{
		cout << "Player Win" << endl;
	}
	else
	{
		cout << "Enemy Win" << endl;
	}
}