/*
���� 2. ������ (Ÿ�� ����)

- ġƮ �ʼ�

- �� 1 ~ 13������ ī��

- ��	 1 ~ 13������ ī��

- �� 1 ~ 13������ ī��

- �� 1 ~ 13������ ī��

- ����ó��
�� A -> 1
�� J -> 11
�� Q -> 12
�� K -> 13

- 52���� ī�带 �ּ� �ѹ� �������� �����ְ� �� �� ���� ���� 3�徿 �����´�.

- ���ʿ� ��ġ�� ������ ī�带 ���� �ּ� ���þ� �̻��� �ݾ��� �����Ѵ�.

- ���� �� ����° ī���� ���� �ռ� ���µ� ī�� ������ ���̿� �ִٸ� ���ñ��� 2�� ȹ���Ͽ� ������ �߰�

- �ݴ��� �����ݿ��� ������ ��ŭ ���̳ʽ�

- �ʼ� : ������ ������ ���� ī��� ������ ����� �� ����.

*/
#include "06_����2.h"

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
		cout << "ī�带 �����ݴϴ�.\n";
		for (int i = 0; i < shuffleN; i++) {
			int shuffleFirst = rand() % 52;
			int shufflesecond = rand() % 52;
			int tempCard = deck[shuffleFirst];
			deck[shuffleFirst] = deck[shufflesecond];
			deck[shufflesecond] = tempCard;
		}
		cout << "ī�带 �� �������ϴ�.\n";
		cout << "������ ������ �����մϴ�.\n";
		int count = 1;
		while ((deckSize > 2) && (money >= 1000))
		{
			cout << count << "��\n";
			cout << "���� ������ : " << money << endl;
			int firstCard = deck[deckSize - 1];
			int secondCard = deck[deckSize - 2];
			int thirdCard = deck[deckSize - 3];
			cout << "ù��° ī�� : " << cardPattern(firstCard / 100) << firstCard % 100 << endl;
			cout << "�ι�° ī�� : " << cardPattern(secondCard / 100) << secondCard % 100 << endl;
			cout << "������ �ݾ��� �Է����ּ���(�ּ�1000) : ";
			cin >> betting;
			cout << "�� ��° ī�� : " << cardPattern(thirdCard / 100) << thirdCard % 100 << endl;
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
			return '��';
			break;
		case 1:
			return '��';
			break;
		case 2:
			return '��';
			break;
		case 3:
			return '��';
			break;
		}
	}
}