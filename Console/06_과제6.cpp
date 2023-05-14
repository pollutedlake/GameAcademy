/*
타임어택. 월남뽕

- 시간은 14분
과제4. 하이로우세븐

- 치트 필수

- ♣ 1 ~ 13까지의 카드

- ◆	 1 ~ 13까지의 카드

- ♠ 1 ~ 13까지의 카드

- ♥ 1 ~ 13까지의 카드

- 52장의 카드를 최소 한번이상 랜덤으로 섞고 그 후 매턴마다 5장씩 뒤집는다.

- 앞쪽에 배치된 다섯장의 카드를 보고 6카드의 숫자를 예측하는 게임

- 세븐보다 높으면 하이, 낮으면 로우, 아니면 세븐인지 중에 1개 배팅

- 세븐이면 13배 배당금 획득
*/
#include"06_과제6.h"

namespace ASSIGNMENT_6
{
	void highlowseven ()
	{
		srand(time(NULL));
		int money = 10000;
		int deck[52];
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		for (int i = 0; i < 52; i++)
		{
			deck[i] = (i % 13 + 1) + ((i / 13) * 100);
		}
		while (money > 0)
		{
			cout << "현재 소지금 : " << money << endl << endl;
			cout << "카드를 섞습니다.\n";
			int shuffleN = shuffleRange(rnd);
			for (int i = 0; i < shuffleN; i++)
			{
				int dest = rand() % 52;
				int sour = rand() % 52;
				int temp = deck[dest];
				deck[dest] = deck[sour];
				deck[sour] = temp;
			}
			cout << "카드를 다 섞었습니다.\n\n하이로우세븐게임을 시작합니다.\n\n";
			int deckSize = sizeof(deck) / sizeof(deck[0]);
			int firstCard = deck[deckSize - 1];
			int secondCard = deck[deckSize - 2];
			int thirdCard = deck[deckSize - 3];
			int fourthCard = deck[deckSize - 4];
			int fifthCard = deck[deckSize - 5];
			int sixthCard = deck[deckSize - 6];
			cout << "첫번째 카드 : ";
			cardPattern(firstCard / 100);
			cardNumber(firstCard % 100);
			cout << "두번째 카드 : ";
			cardPattern(secondCard / 100);
			cardNumber(secondCard % 100);
			cout << "세번째 카드 : ";
			cardPattern(thirdCard / 100);
			cardNumber(thirdCard % 100);
			cout << "네번째 카드 : ";
			cardPattern(fourthCard / 100);
			cardNumber(fourthCard % 100);
			cout << "다섯번째 카드 : ";
			cardPattern(fifthCard / 100);
			cardNumber(fifthCard % 100);
			cout << endl;
			cout << "하이, 로우, 세븐 중 배팅할 것을 선택해주세요(0 : 하이, 1 : 로우, 2 : 세븐) : ";
			int bettingChoice;
			cin >> bettingChoice;
			cout << "배팅할 금액을 입력해주세요 : ";
			int bettingMoney;
			cin >> bettingMoney;
			cout << "여섯번째 카드 : ";
			cardPattern(sixthCard / 100);
			cardNumber(sixthCard % 100);
			if (sixthCard % 100 == 7 && bettingChoice == 2)
			{
				money += bettingMoney * 13;
			}
			else if (sixthCard % 100 < 7 && bettingChoice == 1)
			{
				money += bettingMoney * 2;
			}
			else if (sixthCard % 100 > 7 && bettingChoice == 0)
			{
				money += bettingMoney * 2;
			}
			else
			{
				money -= bettingMoney;
			}
		}
	}

	void cardPattern(int n)
	{
		switch (n)
		{
		case 0:
			cout << "♣ ";
			break;
		case 1:
			cout << "◆ ";
			break;
		case 2:
			cout << "♠ ";
			break;
		case 3:
			cout << "♥ ";
			break;
		}
	}

	void cardNumber(int n)
	{
		if (n > 1 && n < 11)
		{
			cout << n;
		}
		else
		{
			switch (n)
			{
			case 1:
				cout << 'A';
				break;
			case 11:
				cout << 'J';
				break;
			case 12:
				cout << 'Q';
				break;
			case 13:
				cout << 'K';
				break;
			}
		}
		cout << endl;
	}
}