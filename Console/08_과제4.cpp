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
			playerIndex[i] = i;
			AIBoard[i] = i;
			AIIndex[i] = i;
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
		int count = 1;
		cin >> difficulcy;
		int choice = NULL;
		while (playerBinggo < 5 && AIBinggo < 5)
		{
			system("cls");
			cout << count << "��° ��\n";
			cout << "���� ����� " << playerBinggo << "�����Դϴ�.\n";
			cout << "���� ���� " << AIBinggo << "�����Դϴ�.\n\n";
			if(count != 1)
			{
				cout << "������ ������ ���� : " << choice << endl;
			}
			cout << "����� ������\n";
			printBoard(playerBoard);
			cout << endl;
			cout << "������ ������\n";
			printBoard(AIBoard);
			cout << "������ ���ڸ� ����ּ���(0 ~ 24) : ";
			cin >> choice;
			playerBoard[playerIndex[choice]] += 100;
			AIBoard[AIIndex[choice]] += 100;
			playerBinggo += checkBinggo(playerBoard, playerIndex, choice);
			AIBinggo += checkBinggo(AIBoard, AIIndex, choice);
			if (playerBinggo > 4 || AIBinggo > 4)
			{
				break;
			}
			if (difficulcy == 0)
			{
				choice = AIChoiceEasy(AIBoard);
			}
			else
			{
				choice = AIChoiceHard(AIBoard, AIBinggo);
			}
			playerBoard[playerIndex[choice]] += 100;
			AIBoard[AIIndex[choice]] += 100;
			playerBinggo += checkBinggo(playerBoard, playerIndex, choice);
			AIBinggo += checkBinggo(AIBoard, AIIndex, choice);
			count++;
		};
		system("cls");
		cout << "���� ����� " << playerBinggo << "�����Դϴ�.\n";
		cout << "���� ���� " << AIBinggo << "�����Դϴ�.\n\n";
		cout << "����� ������\n";
		printBoard(playerBoard);
		cout << endl;
		cout << "������ ������\n";
		printBoard(AIBoard);
		cout << endl;
		if (playerBinggo >= 5)
		{
			cout << "����� �̰���ϴ�.\n";
		}
		else
		{
			cout << "����� �����ϴ�.\n";
		}
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

	int checkBinggo(int board[25], int index[25], int n)
	{
		int binggo = 0;
		int count = 0;
		for (int i = (index[n] / 5) * 5; i < (index[n] / 5 + 1) * 5; i++)
		{
			if (board[i] / 100 != 0)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count == 5)
		{
			binggo++;
		}
		count = 0;
		// ���� Ȯ��
		for (int i = index[n] % 5; i < 25; i += 5)
		{
			if (board[i] / 100 != 0)
			{
				count++;
			}
			else {
				break;
			}
		}
		if (count == 5)
		{
			binggo++;
		}
		count = 0;
		// ���� �� �밢�� Ȯ��
		if (index[n] % 6 == 0)
		{
			for (int i = 0; i < 25; i += 6)
			{
				if (board[i] / 100 != 0)
				{
					count++;
				}
				else {
					break;
				}
			}
		}
		if (count == 5)
		{
			binggo++;
		}
		count = 0;
		// ������ �� �밢�� Ȯ��
		if (index[n] % 4 == 0 && index[n] < 24)
		{
			for (int i = 4; i < 24; i += 4)
			{
				if (board[i] / 100 != 0)
				{
					count++;
				}
				else {
					break;
				}
			}
		}
		if (count == 5)
		{
			binggo++;
		}

		return binggo;
	}

	int AIChoiceEasy(int board[25])
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> randRage(0, 24);
		int choice = 25;
		while (choice > 24 )
		{
			choice = board[randRage(rnd)];
		}
		return choice;
	}

	int AIChoiceHard(int board[25], int binggoN)
	{
		struct weight
		{
			bool isChecked = false;
			int row = 1;
			int col = 1;
			int crossRD = 1;
			int crossLD = 1;
		};
		int maxWeight = -1;
		int maxIndex;
		weight weights[25];
		for (int i = 0; i < 25; i++)
		{
			int count = 0;
			if (board[i] / 100 != 0)
			{
				weights[i].isChecked = true;
				continue;
			}
			if (i % 6 == 0)
			{
				for (int j = 0; j < 25; j += 6)
				{
					weights[i].crossRD += board[i / 5 + j] / 100;
				}
			}
			else
			{
				weights[i].crossLD = 0;
			}
			if (i % 4 == 0 && i < 24)
			{
				for (int j = 0; j < 5; j++)
				{
					weights[i].crossLD += board[i / 5 + j] / 100;
				}
			}
			else
			{
				weights[i].crossRD = 0;
			}
			for (int j = 0; j < 5; j++)
			{
				weights[i].row += board[(i / 5) * 5 + j] / 100;
			}
			for (int j = 0; j < 5; j++)
			{
				weights[i].col += board[(i % 5) + j * 5] / 100;
			}
			if (5 - binggoN >= 4)
			{
				if (board[12] / 100 == 0)
				{
					return board[12];
				}
				if (maxWeight < weights[i].row + weights[i].col + weights[i].crossLD + weights[i].crossRD)
				{
					maxWeight = weights[i].row + weights[i].col + weights[i].crossLD + weights[i].crossRD;
					maxIndex = i;
				}
			}
			else if (5 - binggoN == 3)
			{
				if (maxWeight < max(weights[i].row + weights[i].col + weights[i].crossLD, weights[i].row + weights[i].col + weights[i].crossRD, weights[i].crossRD + weights[i].col + weights[i].crossLD, weights[i].row + weights[i].crossRD + weights[i].crossLD))
				{
					maxWeight = max(weights[i].row + weights[i].col + weights[i].crossLD, weights[i].row + weights[i].col + weights[i].crossRD, weights[i].crossRD + weights[i].col + weights[i].crossLD, weights[i].row + weights[i].crossRD + weights[i].crossLD);
					maxIndex = i;
				}
			}
			else if (5 - binggoN == 2)
			{
				if (maxWeight < max(weights[i].row + weights[i].col, weights[i].row + weights[i].crossLD, weights[i].row + weights[i].crossRD, weights[i].col + weights[i].crossLD, weights[i].col + weights[i].crossRD, weights[i].crossLD + weights[i].crossRD))
				{
					maxWeight = max(weights[i].row, weights[i].col, weights[i].crossLD, weights[i].crossRD);
					maxIndex = i;
				}
			}
			else
			{
				if (maxWeight < max(weights[i].row, weights[i].col, weights[i].crossLD, weights[i].crossRD))
				{
					maxWeight = max(weights[i].row, weights[i].col, weights[i].crossLD, weights[i].crossRD);
					maxIndex = i;
				}
			}
		}
		return board[maxIndex];
	}
}