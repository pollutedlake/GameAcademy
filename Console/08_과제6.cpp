/*
���� 1. ���� �����̵�

- ������ : 5 x 4

- ������ġ -> ���� �ϴ�

- ġƮ �ʼ�
�� ġƮŰ�� ������ �ϳ��� ���ڸ� �����ϰ� ������ ���ڴ� ���ĵȴ�.
�� ����ڰ� ������ ������ ���߸鼭 ���α׷��� ������ OK

- �Ϲ������� ���� �꿡 ����� ����ó�� �ؿ´�.
*/
#include"08_����6.h"

#define LEFT		75
#define RIGHT		77
#define UP			72
#define DOWN		80
#define CHEAT		32

namespace ASSIGNMENT_6
{
	void numSlide()
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		uniform_int_distribution<int> numRange(0, 18);
		int num[20];
		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			num[i] = i + 1;
		}
		int blank = 19;
		int shuffleN = shuffleRange(rnd);
		for (int j = 0; j < shuffleN; j++)
		{
			int dest = numRange(rnd);
			int sour = numRange(rnd);
			int temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;
		}
		char numSlide[5][34] = { "|   1   |   2   |   3   |   4   |",
							     "|   5   |   6   |   7   |   8   |",
							     "|   9   |   10  |   11  |   12  |",
							     "|   13  |   14  |   15  |   16  |",
							     "|   17  |   18  |   19  |       |"};
		char* numSlidePtr[5];
		for (int i = 0; i < 5; i++)
		{
			numSlidePtr[i] = numSlide[i];
		}
		while (true)
		{
			system("cls");
			for (int i = 0; i < 20; i++)
			{
				if (num[i] == 20)
				{
					*(numSlide[i / 4] + 4 + ((i % 4) * 8)) = ' ';
					*(numSlide[i / 4] + 5 + ((i % 4) * 8)) = ' ';
					continue;
				}
				if ((num[i] / 10) == 0)
				{	
					*(numSlide[i / 4] + 4 + ((i % 4) * 8)) = num[i] + 48;
					*(numSlide[i / 4] + 5 + ((i % 4) * 8)) = ' ';
				}
				else
				{
					*(numSlide[i / 4] + 4 + ((i % 4) * 8)) = num[i] / 10 + 48;
					*(numSlide[i / 4] + 5 + ((i % 4) * 8)) = num[i] % 10 + 48;
				}
			}
			for (int i = 0; i < 5; i++)
			{
				cout << numSlidePtr[i] << endl;
			}
			if (checkComplete(numSlidePtr))
			{
				break;
			}
			int nkey = 0;
			cout << "����Ű�� ���� ������ ������ �Է��ϼ��� (Space Bar : ġƮ): ";
			while(true)
			{
				if (_kbhit())
				{
					nkey = _getch();
					if (nkey == 224)
					{
						nkey = _getch();
						switch (nkey)
						{
						case LEFT:
							if (blank % 4 == 0)
							{
								cout << "\n�� �����δ� �� �� �����ϴ�. �ٽ� �Է����ּ���. (Space Bar : ġƮ): ";
								continue;
							}
							break;
						case RIGHT:
							if (blank % 4 == 3)
							{
								cout << "\n�� �����δ� �� �� �����ϴ�. �ٽ� �Է����ּ���. (Space Bar : ġƮ): ";
								continue;
							}
							break;
						case UP:
							if (blank / 4 == 0)
							{
								cout << "\n�� �����δ� �� �� �����ϴ�. �ٽ� �Է����ּ���. (Space Bar : ġƮ): ";
								continue;
							}
							break;
						case DOWN:
							if (blank / 4 == 4)
							{
								cout << "\n�� �����δ� �� �� �����ϴ�. �ٽ� �Է����ּ���. (Space Bar : ġƮ): ";
								continue;
							}
							break;
						}
						break;
					}
					else if (nkey == CHEAT)
					{
						cheat(num, &blank);
						break;
					}
					else
					{
						cout << "\n�̵��� ������ ����Ű�� �Է����ּ��� (Space Bar : ġƮ): ";
					}
				}
			}
			switch (nkey)
			{
			case LEFT:
				num[blank] = num[blank - 1];
				num[blank - 1] = 20;
				blank--;
				break;
			case RIGHT:
				num[blank] = num[blank + 1];
				num[blank + 1] = 20;
				blank++;
				break;
			case UP:
				num[blank] = num[blank - 4];
				num[blank - 4] = 20;
				blank -= 4;
				break;
			case DOWN:
				num[blank] = num[blank + 4];
				num[blank + 4] = 20;
				blank += 4;
				break;
			}
		};
		cout << "�����մϴ�." << endl;
	}

	bool checkComplete(char* numSlide[5])
	{
		char* correctNumSlidePtr[5] = { "|   1   |   2   |   3   |   4   |",
										"|   5   |   6   |   7   |   8   |",
										"|   9   |   10  |   11  |   12  |",
										"|   13  |   14  |   15  |   16  |",
										"|   17  |   18  |   19  |       |" };
		for (int i = 0; i < 5; i++)
		{
			if (strcmp(numSlide[i], correctNumSlidePtr[i]) != 0)
			{
				return false;
			}
		}
		return true;
	}

	void cheat(int num[], int* blank)
	{
		for (int i = 0; i < 20; i++)
		{
			if (i == 18)
			{
				num[i] = 20;
				*blank = 18;
				continue;
			}
			if (i == 19)
			{
				num[i] = 19;
				continue;
			}
			num[i] = i + 1;
		}
	}
}