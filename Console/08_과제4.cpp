/*
도전 과제1. 빙고

- 위에 룰을 그대로 따라간다.

- 단, 혼자하는 빙고가 아닌 AI와 번갈아 가며 플레이 하는 빙고 버전

- 완성도는 AI 수준에 따라서 나뉜다.

한줄 조사. 4대 문자열 + 포인터

- 노트에 적어온다.

- 비유할것 생각해 온다.
*/
#include "08_과제4.h"

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
		cout << "난이도를 설정해 주세요(0 : 쉬움, 1 : 어려움) : ";
		int difficulcy;
		cin >> difficulcy;
		do
		{
			system("cls");
			cout << "현재 당신은" << playerBinggo << "빙고입니다.\n";
			cout << "현재 상대는" << AIBinggo << "빙고입니다.\n";
			cout << "당신의 빙고판\n";
			printBoard(playerBoard);
			cout << endl;
			cout << "상대방의 빙고판\n";
			printBoard(AIBoard);
			cout << "선택할 숫자를 골라주세요(0 ~ 24) : ";
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