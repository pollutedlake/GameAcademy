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
#pragma warning(disable:4996)

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

void AutoBattleGame::screenInit()
{
	CONSOLE_CURSOR_INFO cci;

	g_hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	g_hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(g_hScreen[0], &cci);
	SetConsoleCursorInfo(g_hScreen[1], &cci);
}

void AutoBattleGame::screenFlipping()
{
	SetConsoleActiveScreenBuffer(g_hScreen[g_nScreenIndex]);
	g_nScreenIndex = !g_nScreenIndex;
}

void AutoBattleGame::screenClear()
{
	COORD Coor = { 0, 0 };
	DWORD  dw;
	FillConsoleOutputCharacter(g_hScreen[g_nScreenIndex], ' ', 100 * 100, Coor, &dw);
}

void AutoBattleGame::screenRelease()
{
	CloseHandle(g_hScreen[0]);
	CloseHandle(g_hScreen[1]);
}

void AutoBattleGame::screenPrint(int x, int y, char* string)
{
	DWORD dw;
	COORD cursorPosition = { x, y };
	SetConsoleCursorPosition(g_hScreen[g_nScreenIndex], cursorPosition);
	WriteFile(g_hScreen[g_nScreenIndex], string, strlen(string), &dw, NULL);
}

char* AutoBattleGame::intToString(int n)
{
	char tempString[100] = {};
	int stringLen = 0;
	while (n != 0)
	{
		tempString[stringLen] = n % 10 + 48;
		n /= 10;
		stringLen++;
	}
	int index = 0;
	while (--stringLen >= 0)
	{
		intString[index] = tempString[stringLen];
		index++;
	}
	intString[index] = '\0';
	return intString;
}

void AutoBattleGame::render()
{
	screenClear();
	switch (scene)
	{
	case BATTLE: 
		for (int i = 0; i < 19; i++)
		{
			setColor(1, 0);
			screenPrint(0, i, player->getPlayerDot(i));
			setColor(4, 0);
			screenPrint(90, i, enemy->getEnemyDot(i));
		}
		setColor(15, 0);
		if (damageToEnemy != -1)
		{
			int i = 2;
			if (enemy->getSpeed() < player->getSpeed())
			{
				i = 0;
			}
			screenPrint(40, 10 + i, "당신이 적에게 ");
			switch (damageToEnemy / 100)
			{
			case 0:
				screenPrint(54, 10 + i, "기본공격");
				break;
			case 1:
				screenPrint(54, 10 + i, player->getSkill1Name());
				break;
			case 2:
				screenPrint(54, 10 + i, player->getSkill2Name());
				break;
			}
			screenPrint(40, 11 + i, "당신이 적에게 준 데미지 : ");
			screenPrint(66, 11 + i, intToString(damageToEnemy % 100));
			screenPrint(40, 12 - i, "적이 당신에게 ");
			switch (damageToPlayer /100)
			{
			case 0:
				screenPrint(54, 12 - i, "기본공격");
				break;
			case 1:
				screenPrint(54, 12 - i, enemy->getSkill1Name());
				break;
			}
			screenPrint(40, 13 - i, "적이 당신에게 준 데미지 : ");
			screenPrint(66, 13 - i, intToString(damageToPlayer % 100));
			screenPrint(40, 14, "당신의 HP : ");
			screenPrint(53, 14, intToString(player->getHP()));
			screenPrint(40, 15, "적의 HP : ");
			screenPrint(53, 15, intToString(enemy->getHP()));
			screenPrint(40, 16, "Press \"E\" to change Equipment");
			screenPrint(40, 17, "Press \"P\" to drink Portion");
			if (enemy->getHP() == 0)
			{
				screenPrint(40, 18, "YOU WIN");
			}
			else if (player->getHP() == 0)
			{
				screenPrint(40, 18, "YOU LOSE");
			}
			break;
		}
		break;
	case EQUIPMENT:
		break;
	case PORTION:
		break;
	}
	screenFlipping();
}

void AutoBattleGame::setColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(g_hScreen[g_nScreenIndex], color);
}

void AutoBattleGame::playGame()
{
	screenInit();
	while (true)
	{
		render();
		switch (scene)
		{
		case BATTLE:
			if (oldTime == NULL)
			{
				oldTime = clock();
			}
			curTime = clock();
			if(curTime - oldTime > 3000)
			{
				// 전투
				// player의 speed가 enemy보다 빠를 경우 player선공
				if (enemy->getSpeed() < player->getSpeed())
				{
					// player 선공
					damageToEnemy = enemy->getDamage(player->attack());
					// enemy 사망
					if (enemy->getHP() <= 0)
					{
						enemy->setHP(0);
						break;
					}
					// enemy 후공
					int enemyAttack = enemy->attack();
					damageToPlayer = player->getDamage(enemyAttack % 100, enemyAttack / 100);
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
				damageToPlayer = player->getDamage(enemyAttack % 100, enemyAttack / 100);
				// 플레이어 사망
				if (player->getHP() <= 0)
				{
					player->setHP(0);
					break;
				}
				// player 후공
				damageToEnemy = enemy->getDamage(player->attack());
				// enemy 사망
				if (enemy->getHP() <= 0)
				{
					enemy->setHP(0);
					break;
				}
			}
				oldTime = curTime;
			}
			if (_kbhit())
			{
				int key = _getch();
				if (key == 'e' || key == 'E')
				{
					scene = EQUIPMENT;
					break;
				}
				else if (key == 'p' || key == 'P')
				{
					scene = PORTION;
					break;
				}
			}
			break;
			case EQUIPMENT:
			break;
			case PORTION:
			break;
		}
	}
	render();
}