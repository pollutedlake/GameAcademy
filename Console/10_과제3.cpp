#include "10_과제3.h"
/*
과제3. 대전 게임 만들기

- 스타트 씬과 게임 씬으로 구성된 대전 게임

- 도트와 색상, 체력바를 필수로 포함한다.

- 플레이어만 공격을 하면 안되며 적 역시 공격을 해야 한다.
ㄴ + 게임 오버 조건 또한 반드시 있어야 한다.
*/
#pragma warning(disable : 4996)

Assignment3::Assignment3()
{
	player = new FG_Player;
	enemy = new FG_Enemy;
	ui = new FG_UI;
}

Assignment3::~Assignment3()
{
	delete enemy;
	delete player;
	delete ui;
}

void Assignment3::screenInit()
{
	CONSOLE_CURSOR_INFO cci;

	g_hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	g_hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(g_hScreen[0], &cci);
	SetConsoleCursorInfo(g_hScreen[1], &cci);
}

void Assignment3::screenFlipping()
{
	SetConsoleActiveScreenBuffer(g_hScreen[g_nScreenIndex]);
	g_nScreenIndex = !g_nScreenIndex;
}

void Assignment3::screenClear()
{
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(g_hScreen[g_nScreenIndex], ' ', 100 * 100, Coor, &dw);
}

void Assignment3::screenRelease()
{
	CloseHandle(g_hScreen[0]);
	CloseHandle(g_hScreen[1]);
}

void Assignment3::screenPrint(int x, int y, char* string)
{
	DWORD dw;
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(g_hScreen[g_nScreenIndex], CursorPosition);
	WriteFile(g_hScreen[g_nScreenIndex], string, strlen(string), &dw, NULL);
}

void Assignment3::render()
{
	screenClear();
	switch(scene)
	{
	case STARTSCENE:
		screenPrint(50, 10, ui->returnStartScene());
	break;
	case BATTLESCENE:
		setColor(15, 0);
		screenPrint(0, 0, "이동 : <-(좌), ->(우)\t공격 : a");
		for (int i = 0; i < player->returnHp() / 5; i++)
		{
			setColor(1, 0);
			screenPrint(0 + 2 * i, 3, "■");
			screenPrint(0 + 2 * i, 2, "■");
		}
		for (int i = 0; i < enemy->returnHp() / 5; i++)
		{
			setColor(4, 0);
			screenPrint(100 - 2 * i, 3, "■");
			screenPrint(100 - 2 * i, 2, "■");
		}
		setColor(15, 0);
		screenPrint(50, 3, "VS");
		for(int i = 0; i < 19; i++)
		{
			if(player->returnState())
			{
				setColor(4, 0);
				char* ememyMotion = enemy->returnMotion(i);
				if (enemy->returnState())
				{
					screenPrint(enemy->returnPos() - 8, 10 + i, ememyMotion);
				}
				else
				{
					screenPrint(enemy->returnPos(), 10 + i, ememyMotion);
				}
				setColor(1, 0);
				char* playerMotion = player->returnMotion(i);
				screenPrint(player->returnPos(), 10 + i, playerMotion);
			}
			else
			{
				setColor(1, 0);
				char* playerMotion = player->returnMotion(i);
				screenPrint(player->returnPos(), 10 + i, playerMotion);
				setColor(4, 0);
				char* ememyMotion = enemy->returnMotion(i);
				if (enemy->returnState())
				{
					screenPrint(enemy->returnPos() - 8, 10 + i, ememyMotion);
				}
				else
				{
					screenPrint(enemy->returnPos(), 10 + i, ememyMotion);
				}
			}
		}
		break;
	case ENDSCENE:
		setColor(15, 0);
		if(player->returnHp() > 0)
		{
			screenPrint(50, 10, ui->returnEndScenePlayerWin());
		}
		else
		{
			screenPrint(50, 10, ui->returnEndSceneEnemyWin());
		}
		screenPrint(50, 11, ui->returnEndScene());
	break;
	}
	screenFlipping();
}

void Assignment3::gamePlay()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> aiRange(0, 4);
	screenInit();
	while (1)
	{
		switch (scene)
		{
		case STARTSCENE:
			if (_kbhit())
			{
				int key = _getch();
				if (key == 's' || key == 'S')
				{
					scene = BATTLESCENE;
				}
			}
		break;
		case BATTLESCENE:
			if (aiOldTime == NULL)
			{
				aiOldTime = clock();
			}
			aiCurTime = clock();
			if (!(player->returnState()))
			{
				if (_kbhit())
				{
					int key = _getch();
					if (key == 224)
					{
						key = _getch();
						switch (key)
						{
						case 75:
							if (player->returnPos() > 0)
							{
								player->move(-1);
							}
							break;
						case 77:
							if(enemy->returnPos() - player->returnPos() > 12)
							{
								player->move(1);
							}
							break;
						}
					}
					else if (key == 'a')
					{
						player->changeState();
						if (enemy->returnPos() - player->returnPos() < 20)
						{
							enemy->getDamege(10);
						}
						playerAttackOldTime = clock();
					}
				}
			}
			else
			{
				playerAttackCurTime = clock();
				if (playerAttackCurTime - playerAttackOldTime > 300)
				{
					player->changeState();
				}
			}
			if (player->returnHp() <= 0 || enemy->returnHp() <= 0)
			{
				scene = ENDSCENE;
			}
			if (aiCurTime - aiOldTime > 300 && !enemy->returnState())
			{
				int ai = aiRange(rnd);
				if (enemy->returnPos() - player->returnPos() < 20)
				{
					if (ai == 0)
					{
						if (enemy->returnState() - player->returnPos() > 12)
						{
							enemy->move(-1);
						}
					}
					else if (ai > 2)
					{
						enemy->move(1);
					}
					else
					{
						enemy->changeState();
						enemyAttackOldTime = clock();
						if (enemy->returnState() - player->returnPos() < 12)
						{
							player->getDamege(10);
						}
					}
				}
				else
				{
					if (ai == 0)
					{
						enemy->changeState();
						enemyAttackOldTime = clock();
					}
					else if (ai > 3)
					{
						if(enemy->returnPos() < 90)
						{
							enemy->move(1);
						}
					}
					else
					{
						enemy->move(-1);
					}
				}
				aiOldTime = clock();
			}
			if (enemy->returnState())
			{
				enemyAttackCurTime = clock();
				if (enemyAttackCurTime - enemyAttackOldTime > 300)
				{
					enemy->changeState();
				}
			}
		break;
		case ENDSCENE:
		break;
		}
		render();
	}

	screenRelease();
}

void Assignment3::setColor(int font, int background) {
	int color = font + background * 16;
	SetConsoleTextAttribute(g_hScreen[g_nScreenIndex], color);
}