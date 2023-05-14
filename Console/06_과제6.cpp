/*
Ÿ�Ӿ���. ������

- �ð��� 14��
����4. ���̷ο켼��

- ġƮ �ʼ�

- �� 1 ~ 13������ ī��

- ��	 1 ~ 13������ ī��

- �� 1 ~ 13������ ī��

- �� 1 ~ 13������ ī��

- 52���� ī�带 �ּ� �ѹ��̻� �������� ���� �� �� ���ϸ��� 5�徿 �����´�.

- ���ʿ� ��ġ�� �ټ����� ī�带 ���� 6ī���� ���ڸ� �����ϴ� ����

- ���캸�� ������ ����, ������ �ο�, �ƴϸ� �������� �߿� 1�� ����

- �����̸� 13�� ���� ȹ��
*/
#include"06_����6.h"

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
			cout << "���� ������ : " << money << endl << endl;
			cout << "ī�带 �����ϴ�.\n";
			int shuffleN = shuffleRange(rnd);
			for (int i = 0; i < shuffleN; i++)
			{
				int dest = rand() % 52;
				int sour = rand() % 52;
				int temp = deck[dest];
				deck[dest] = deck[sour];
				deck[sour] = temp;
			}
			cout << "ī�带 �� �������ϴ�.\n\n���̷ο켼������� �����մϴ�.\n\n";
			int deckSize = sizeof(deck) / sizeof(deck[0]);
			int firstCard = deck[deckSize - 1];
			int secondCard = deck[deckSize - 2];
			int thirdCard = deck[deckSize - 3];
			int fourthCard = deck[deckSize - 4];
			int fifthCard = deck[deckSize - 5];
			int sixthCard = deck[deckSize - 6];
			cout << "ù��° ī�� : ";
			cardPattern(firstCard / 100);
			cardNumber(firstCard % 100);
			cout << "�ι�° ī�� : ";
			cardPattern(secondCard / 100);
			cardNumber(secondCard % 100);
			cout << "����° ī�� : ";
			cardPattern(thirdCard / 100);
			cardNumber(thirdCard % 100);
			cout << "�׹�° ī�� : ";
			cardPattern(fourthCard / 100);
			cardNumber(fourthCard % 100);
			cout << "�ټ���° ī�� : ";
			cardPattern(fifthCard / 100);
			cardNumber(fifthCard % 100);
			cout << endl;
			cout << "����, �ο�, ���� �� ������ ���� �������ּ���(0 : ����, 1 : �ο�, 2 : ����) : ";
			int bettingChoice;
			cin >> bettingChoice;
			cout << "������ �ݾ��� �Է����ּ��� : ";
			int bettingMoney;
			cin >> bettingMoney;
			cout << "������° ī�� : ";
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
			cout << "�� ";
			break;
		case 1:
			cout << "�� ";
			break;
		case 2:
			cout << "�� ";
			break;
		case 3:
			cout << "�� ";
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