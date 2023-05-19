#include"10_과제4.h"
/*
과제4. 가위바위보

- 클래스를 활용해 객체지향으로 나눠온다.

- 최소 클래스는 3개
*/

Assignment4::Assignment4()
{
	playGame();
}

Assignment4::~Assignment4()
{
	delete me;
	delete opponent;
}

void Assignment4::playGame()
{
	cout << "가위바위보게임을 시작합니다." << endl;
	me = new RPS_Me;
	opponent = new RPS_Opponent;
	if (opponent != NULL && me != NULL)
	{
		opponent->setRPS();
		opponent->printRPS();
		me->setRPS();
		switch (checkWhoWin(me->returnRPS(), opponent->returnRPS()))
		{
		case DRAW:
			cout << "비겼습니다.\n";
			break;
		case WIN:
			cout << "이겼습니다.\n";
			break;
		case LOSE:
			cout << "졌습니다.\n";
			break;
		}
	}
}

int Assignment4::checkWhoWin(int meRPS, int opponentRPS)
{
	if (meRPS == opponentRPS)
	{
		return 0;
	}
	if (meRPS == (opponentRPS + 1) % 3)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}