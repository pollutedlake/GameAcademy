/*
과제3. 짝 맞추기

- 사이즈 : 5 X 4

- ☆ ★ ◇ ◆ ♤ ♠ ♡ ♥ ♧ ♣

- 짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.

- 뒤집힌 카드는 #으로 출력

- 2가지 버전으로 치트 만들기

ㄴ 1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초뒤에 다시 원상 복귀 시킨다.

ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈된다. 사용자가 마지막 한쌍을 맞추면서 게임이 종료되면 OK
*/
#include "06_과제5.h"

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
				cout << "뒤집을 첫번째 카드의 행을 입력하세요(99 : 모든 카드를 5초동안 오픈하여 보여줍니다., 999 : 한쌍의 카드를 제외하고 전부 오픈합니다.) : ";
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
				cout << "뒤집을 첫번째 카드의 열을 입력하세요(99 : 모든 카드를 5초동안 오픈하여 보여줍니다.) : ";
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
				cout << "뒤집을 두번째 카드의 행을 입력하세요(99 : 모든 카드를 5초동안 오픈하여 보여줍니다.) : ";
				cin >> row2;
				if (row2 == 99)
				{
					cheat1(cards);
					continue;
				}
				cout << "뒤집을 두번째 카드의 열을 입력하세요(99 : 모든 카드를 5초동안 오픈하여 보여줍니다.) : ";
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
						cout << "☆";
						break;
					case 1:
						cout << "★";
						break;
					case 2:
						cout << "◇";
						break;
					case 3:
						cout << "◆";
						break;
					case 4:
						cout << "♤";
						break;
					case 5:
						cout << "♠";
						break;
					case 6:
						cout << "♡";
						break;
					case 7:
						cout << "♥";
						break;
					case 8:
						cout << "♧";
						break;
					case 9:
						cout << "♣";
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
				cout << "☆";
				break;
			case 1:
				cout << "★";
				break;
			case 2:
				cout << "◇";
				break;
			case 3:
				cout << "◆";
				break;
			case 4:
				cout << "♤";
				break;
			case 5:
				cout << "♠";
				break;
			case 6:
				cout << "♡";
				break;
			case 7:
				cout << "♥";
				break;
			case 8:
				cout << "♧";
				break;
			case 9:
				cout << "♣";
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