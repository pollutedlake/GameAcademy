#include "11_����1.h"
/*
���� 1. Getter + Setter ����

- �ڵ� ���� ������ �����.

- Ŭ������ 5�� �̻�

- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ : ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ�����, ����
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ���� : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��.

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.

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
			screenPrint(40, 10 + i, "����� ������ ");
			switch (damageToEnemy / 100)
			{
			case 0:
				screenPrint(54, 10 + i, "�⺻����");
				break;
			case 1:
				screenPrint(54, 10 + i, player->getSkill1Name());
				break;
			case 2:
				screenPrint(54, 10 + i, player->getSkill2Name());
				break;
			}
			screenPrint(40, 11 + i, "����� ������ �� ������ : ");
			screenPrint(66, 11 + i, intToString(damageToEnemy % 100));
			screenPrint(40, 12 - i, "���� ��ſ��� ");
			switch (damageToPlayer /100)
			{
			case 0:
				screenPrint(54, 12 - i, "�⺻����");
				break;
			case 1:
				screenPrint(54, 12 - i, enemy->getSkill1Name());
				break;
			}
			screenPrint(40, 13 - i, "���� ��ſ��� �� ������ : ");
			screenPrint(66, 13 - i, intToString(damageToPlayer % 100));
			screenPrint(40, 14, "����� HP : ");
			screenPrint(53, 14, intToString(player->getHP()));
			screenPrint(40, 15, "���� HP : ");
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
				// ����
				// player�� speed�� enemy���� ���� ��� player����
				if (enemy->getSpeed() < player->getSpeed())
				{
					// player ����
					damageToEnemy = enemy->getDamage(player->attack());
					// enemy ���
					if (enemy->getHP() <= 0)
					{
						enemy->setHP(0);
						break;
					}
					// enemy �İ�
					int enemyAttack = enemy->attack();
					damageToPlayer = player->getDamage(enemyAttack % 100, enemyAttack / 100);
					if (player->getHP() <= 0)
					{
						player->setHP(0);
						break;
					}
				}
				// enemy�� speed�� player���� ���� ��� enemy����
				else
				{
				// enemy ����
				int enemyAttack = enemy->attack();
				damageToPlayer = player->getDamage(enemyAttack % 100, enemyAttack / 100);
				// �÷��̾� ���
				if (player->getHP() <= 0)
				{
					player->setHP(0);
					break;
				}
				// player �İ�
				damageToEnemy = enemy->getDamage(player->attack());
				// enemy ���
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