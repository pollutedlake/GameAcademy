/*
���� ����1. ����

- ���� ���� �״�� ���󰣴�.

- ��, ȥ���ϴ� ���� �ƴ� AI�� ������ ���� �÷��� �ϴ� ���� ����

- �ϼ����� AI ���ؿ� ���� ������.

���� ����. 4�� ���ڿ� + ������

- ��Ʈ�� ����´�.

- �����Ұ� ������ �´�.
*/
#include "08_����4.h"

namespace ASSIGNMENT_4
{
	void playBinggo()
	{
		int playerBoard[25];
		int playerIndex[25];
		int AIBoard[25];
		int AIIndex[25];
		int boardSize = sizeof(playerBoard) / sizeof(playerBoard[0]);
		for (int i = 0; i < boardSize; i++ )
		{
			playerBoard[i] = i;
			AIBoard[i] = i;
		}
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		uniform_int_distribution<int> indexRange(0, boardSize - 1);

		int shuffleN = shuffleRange(rnd);
		for (int i = 0; i < shuffleN; i++)
		{
			int dest = indexRange(rnd);
			int sour = indexRange(rnd);
			int temp = playerBoard[dest];
			playerBoard[dest] = playerBoard[sour];
			playerBoard[sour] = temp;
			playerIndex[playerBoard[dest]] = dest;
			playerIndex[playerBoard[sour]] = sour;
		}
		shuffleN = shuffleRange(rnd);
		for (int i = 0; i < shuffleN; i++)
		{
			int dest = indexRange(rnd);
			int sour = indexRange(rnd);
			int temp = AIBoard[dest];
			AIBoard[dest] = AIBoard[sour];
			AIBoard[sour] = temp;
			AIIndex[AIBoard[dest]] = dest;
			AIIndex[AIBoard[sour]] = sour;
		}
		int playerBinggo = 0;
		int AIBinggo = 0;
		cout << "���̵��� ������ �ּ���(0 : ����, 1 : �����) : ";
		int difficulcy;
		cin >> difficulcy;
		do
		{
			system("cls");
			cout << "���� �����" << playerBinggo << "�����Դϴ�.\n";
			cout << "���� ����" << AIBinggo << "�����Դϴ�.\n";
			cout << "����� ������\n";
			printBoard(playerBoard);
			cout << endl;
			cout << "������ ������\n";
			printBoard(AIBoard);
			cout << "������ ���ڸ� ����ּ���(0 ~ 24) : ";
			int choice;
			cin >> choice;
			playerBoard[playerIndex[choice]] += 100;
			AIBoard[AIIndex[choice]] += 100;
		} while (true);
	}

	void printBoard(int board[25])
	{
		for (int i = 0; i < 25; i++)
		{
			if (board[i] / 100 == 0)
			{
				cout << board[i] << "\t";
			}
			else
			{
				cout << '#' << "\t";
			}
			if (i % 5 == 4)
			{
				cout << endl;
			}
		}
	}
}