/*
과제3. 빙고 만들기

- 0 ~24까지의 수를 랜덤으로 배치해서 5 x 5로 출력한다.

- 숫자를 선택하면 #, %, & 등등으로 바꾼다.

- 빙고가 되면 빙고 카운트가 올라가고 5 빙고가 되면 게임이 종료된다.
ㄴ 단, 게임이 종료되면 프로그램이 종료되는게 아니라 완성된 빙고가 떠있어야 한다.
*/
#include"08_과제3.h"

namespace ASSIGNMENT_3
{
	void binggo()
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		int board[25];
		int numIndex[25];
		int boardSize = sizeof(board) / sizeof(board[0]);
		uniform_int_distribution<int> boardRange(0, boardSize - 1);
		for (int i = 0; i < boardSize; i++)
		{
			board[i] = i;
		}
		int shuffleN = shuffleRange(rnd);
		for (int i = 0; i < shuffleN; i++)
		{
			int dest = boardRange(rnd);
			int sour = boardRange(rnd);
			int temp = board[dest];
			board[dest] = board[sour];
			board[sour] = temp;
			numIndex[board[dest]] = dest;
			numIndex[board[sour]] = sour;
		}
		int binggo = 0;
		do
		{
			system("cls");
			cout << "현재 " << binggo << "빙고입니다.\n";
			for (int i = 0; i < boardSize; i++)
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
			cout << "선택할 숫자를 골라주세요(0 ~ 24) : ";
			int choice;
			cin >> choice;
			board[numIndex[choice]] += 100;
			int count = 0;
			// 가로 확인
			for (int i = (numIndex[choice] / 5) * 5; i < (numIndex[choice] / 5 + 1) * 5; i++)
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
			// 세로 확인
			for (int i = numIndex[choice] % 5; i < boardSize; i += 5)
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
			// 왼쪽 위 대각선 확인
			if (numIndex[choice] % 6 == 0)
			{
				for (int i = 0; i < boardSize; i += 6)
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
			// 오른쪽 위 대각선 확인
			if (numIndex[choice] % 4 == 0 && numIndex[choice] < 24)
			{
				for (int i = 4; i < boardSize - 1; i += 4)
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
		} while (binggo < 5);
		system("cls");
		cout << "현재 " << binggo << "빙고입니다.\n";
		for (int i = 0; i < boardSize; i++)
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
		cout << "빙고!" << endl;
	}
}