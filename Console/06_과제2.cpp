/*
과제 2. 월남뽕 (타임 어택)

- 치트 필수

- ♣ 1 ~ 13까지의 카드

- ◆	 1 ~ 13까지의 카드

- ♠ 1 ~ 13까지의 카드

- ♥ 1 ~ 13까지의 카드

- 예외처리
ㄴ A -> 1
ㄴ J -> 11
ㄴ Q -> 12
ㄴ K -> 13

- 52장의 카드를 최소 한번 랜덤으로 섞어주고 그 후 매턴 마다 3장씩 뒤집는다.

- 압쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅한다.

- 배팅 후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅금의 2배 획득하여 소지금 추가

- 반대라면 소지금에서 배팅한 만큼 마이너스

- 필수 : 한턴이 끝나고 사용된 카드는 버려져 사용할 수 없다.

*/
#include "06_과제2.h"

namespace WOLNAMPPONG
{
	void wolnamppongPlay()
	{
		srand(time(NULL));
		int money = 10000;
		int betting;
		int deck[52];
		int deckSize = sizeof(deck) / sizeof(deck[0]);
		for (int i = 0; i < deckSize; i++)
		{
			deck[i] = (i % 13) + 1 + i / 13 * 100;
		}
		int shuffleN = rand() % 511;
		cout << "카드를 섞어줍니다.\n";
		for (int i = 0; i < shuffleN; i++) {
			int shuffleFirst = rand() % 52;
			int shufflesecond = rand() % 52;
			int tempCard = deck[shuffleFirst];
			deck[shuffleFirst] = deck[shufflesecond];
			deck[shufflesecond] = tempCard;
		}
		cout << "카드를 다 섞었습니다.\n";
		cout << "월남뽕 게임을 시작합니다.\n";
		int count = 1;
		while ((deckSize > 2) && (money >= 1000))
		{
			cout << count << "턴\n";
			cout << "현재 소지금 : " << money << endl;
			int firstCard = deck[deckSize - 1];
			int secondCard = deck[deckSize - 2];
			int thirdCard = deck[deckSize - 3];
			cout << "첫번째 카드 : " << cardPattern(firstCard / 100) << firstCard % 100 << endl;
			cout << "두번째 카드 : " << cardPattern(secondCard / 100) << secondCard % 100 << endl;
			cout << "배팅할 금액을 입력해주세요(최소1000) : ";
			cin >> betting;
			cout << "세 번째 카드 : " << cardPattern(thirdCard / 100) << thirdCard % 100 << endl;
			if (((thirdCard % 100) < max(firstCard % 100, secondCard % 100)) && ((thirdCard % 100) > min(firstCard % 100, secondCard % 100)))
			{
				money += betting * 2;
			}
			else {
				money -= betting;
			}
			deckSize -= 3;
			count++;
		}
	}

	char AJQK(int n)
	{
		switch (n)
		{
		case 1:
			return 'A';
			break;
		case 11:
			return 'J';
			break;
		case 12:
			return 'Q';
			break;
		case 13:
			return 'K';
			break;
		}
	}

	char cardPattern(int cardPattern)
	{
		cout << cardPattern << endl;
		switch (cardPattern)
		{
		case 0:
			return '♣';
			break;
		case 1:
			return '◆';
			break;
		case 2:
			return '♠';
			break;
		case 3:
			return '♥';
			break;
		}
	}
}