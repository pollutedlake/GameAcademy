/*
����3. ���� �����

- 0 ~24������ ���� �������� ��ġ�ؼ� 5 x 5�� ����Ѵ�.

- ���ڸ� �����ϸ� #, %, & ������� �ٲ۴�.

- ���� �Ǹ� ���� ī��Ʈ�� �ö󰡰� 5 ���� �Ǹ� ������ ����ȴ�.
�� ��, ������ ����Ǹ� ���α׷��� ����Ǵ°� �ƴ϶� �ϼ��� ���� ���־�� �Ѵ�.
*/
#include"08_����3.h"

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
			cout << "���� " << binggo << "�����Դϴ�.\n";
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
			cout << "������ ���ڸ� ����ּ���(0 ~ 24) : ";
			int choice;
			cin >> choice;
			board[numIndex[choice]] += 100;
			int count = 0;
			// ���� Ȯ��
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
			// ���� Ȯ��
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
			// ���� �� �밢�� Ȯ��
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
			// ������ �� �밢�� Ȯ��
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
		cout << "���� " << binggo << "�����Դϴ�.\n";
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
		cout << "����!" << endl;
	}
}