/*
����3. ¦ ���߱�

- ������ : 5 X 4

- �� �� �� �� �� �� �� �� �� ��

- ¦�� ������ ��ȣ�� ��� ���µ� ���·� �־�� �Ѵ�.

- ������ ī��� #���� ���

- 2���� �������� ġƮ �����

�� 1. ġƮŰ�� ������ �и� ���� ���� ���� �÷��̾�� �����ְ� 5�ʵڿ� �ٽ� ���� ���� ��Ų��.

�� 2. ġƮŰ�� ������ �ѽ��� ī�带 �����ϰ� ���� ���µȴ�. ����ڰ� ������ �ѽ��� ���߸鼭 ������ ����Ǹ� OK
*/
#include "06_����5.h"

namespace ASSIGNMENT_5
{
	void findMatch()
	{
		int cards[20];
		for (int i = 0; i < 20; i++)
		{
			cards[i] = i / 2;
		}
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		uniform_int_distribution<int> cardsRange(0, 19);
		int shuffleN = shuffleRange(rnd);
		for (int i = 0; i < shuffleN; i++)
		{
			int dest = cardsRange(rnd);
			int sour = cardsRange(rnd);
			int temp = cards[dest];
			cards[dest] = cards[sour];
			cards[sour] = temp;
		}
		int findPair = 0;
		do 
		{
			int row1, row2, col1, col2;
			do 
			{
				system("cls");
				showCards(cards);
				cout << endl;
				cout << "������ ù��° ī���� ���� �Է��ϼ���(99 : ��� ī�带 5�ʵ��� �����Ͽ� �����ݴϴ�., 999 : �ѽ��� ī�带 �����ϰ� ���� �����մϴ�.) : ";
				cin >> row1;
				if (row1 == 99)
				{
					cheat1(cards);
					continue;
				}
				if (row1 == 999)
				{
					cheat2(cards);
					findPair = 9;
					continue;
				}
				cout << "������ ù��° ī���� ���� �Է��ϼ���(99 : ��� ī�带 5�ʵ��� �����Ͽ� �����ݴϴ�.) : ";
				cin >> col1;
				if (row1 == 99)
				{
					cheat1(cards);
					continue;
				}
			} while(row1 < 0 || row1 > 4 || col1 < 0 || col1 > 3 || (cards[row1 * 4 + col1] / 10 == 1));
			cards[row1 * 4 + col1] += 10;

			do 
			{
				system("cls");
				showCards(cards);
				cout << endl;
				cout << "������ �ι�° ī���� ���� �Է��ϼ���(99 : ��� ī�带 5�ʵ��� �����Ͽ� �����ݴϴ�.) : ";
				cin >> row2;
				if (row2 == 99)
				{
					cheat1(cards);
					continue;
				}
				cout << "������ �ι�° ī���� ���� �Է��ϼ���(99 : ��� ī�带 5�ʵ��� �����Ͽ� �����ݴϴ�.) : ";
				cin >> col2;
				if (col2 == 99)
				{
					cheat1(cards);
					continue;
				}
			} while(row2 < 0 || row2 > 4 || col1 < 0 || col2 > 3 || (cards[row2 * 4 + col2] / 10 == 1));
			cards[row2 * 4 + col2] += 10;
			system("cls");
			showCards(cards);
			if (cards[row1 * 4 + col1] != cards[row2 * 4 + col2])
			{
				cards[row1 * 4 + col1] -= 10;
				cards[row2 * 4 + col2] -= 10;
			}
			else
			{
				findPair++;
			}  
			Sleep(2000);
		} while(findPair != 10);
	}

	void showCards(int cards[])
	{
		for (int i = 0; i < 20; i++) {
			if (cards[i] / 10 == 1)
			{
				switch (cards[i] % 10)
				{
					case 0:
						cout << "��";
						break;
					case 1:
						cout << "��";
						break;
					case 2:
						cout << "��";
						break;
					case 3:
						cout << "��";
						break;
					case 4:
						cout << "��";
						break;
					case 5:
						cout << "��";
						break;
					case 6:
						cout << "��";
						break;
					case 7:
						cout << "��";
						break;
					case 8:
						cout << "��";
						break;
					case 9:
						cout << "��";
						break;
				}
				cout << "\t";
			}
			else
			{
				cout << "#" << "\t";
			}
			if (i % 4 == 3)
			{
				cout << "\n";
			}
		}
	}

	void cheat1(int cards[])
	{
		for (int i = 0; i < 20; i++)
		{
			switch (cards[i] % 10)
			{
			case 0:
				cout << "��";
				break;
			case 1:
				cout << "��";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "��";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			}
			cout << "\t";
			if (i % 4 == 3)
			{
				cout << "\n";
			}
		}
		Sleep(5000);
		system("cls");
	}

	void cheat2(int cards[])
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> randCard(0, 19);
		int except;
		do 
		{
			except = randCard(rnd);
		} while (cards[except] / 10 == 1);
		for (int i = 0; i < 20; i++)
		{
			if (cards[except] % 10 != cards[i] % 10)
			{
				cards[i] += 10;
			}
		}
	}
}