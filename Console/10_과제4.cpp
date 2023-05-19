#include"10_����4.h"
/*
����4. ����������

- Ŭ������ Ȱ���� ��ü�������� �����´�.

- �ּ� Ŭ������ 3��
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
	cout << "���������������� �����մϴ�." << endl;
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
			cout << "�����ϴ�.\n";
			break;
		case WIN:
			cout << "�̰���ϴ�.\n";
			break;
		case LOSE:
			cout << "�����ϴ�.\n";
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