/*
����2. �ִϸ��̼� ���� �����̵�

- �����͸� Ȱ���ؼ� �ؿ´�.

- ���� ����

���� ����. Ŭ����

- ��Ʈ�� ����´�.

- �̷п� ����� ª�� ����ϰ� ���α׷��ӽ����� ������ �´�.
*/
#include"08_����7.h"

#define LEFT		75
#define RIGHT		77
#define UP			72
#define DOWN		80
#define CHEAT		32

namespace ASSIGNMENT_7
{
	void numSlide()
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		uniform_int_distribution<int> numRange(0, 18);
		int num[20];
		char numSlide[21][34] = { "---------------------------------",
								  "|       |       |       |       |",
								  "|   1   |   2   |   3   |   4   |",
								  "|       |       |       |       |",
								  "---------------------------------",
								  "|       |       |       |       |",
								  "|   5   |   6   |   7   |   8   |",
								  "|       |       |       |       |",
								  "---------------------------------",
								  "|       |       |       |       |",
								  "|   9   |   10  |   11  |   12  |",
								  "|       |       |       |       |",
								  "---------------------------------",
								  "|       |       |       |       |",
								  "|   13  |   14  |   15  |   16  |",
								  "|       |       |       |       |",
								  "---------------------------------",
								  "|       |       |       |       |",
								  "|   17  |   18  |   19  |       |",
								  "|       |       |       |       |",
								  "---------------------------------" };
		char* numSlidePtr[21];
		for (int i = 0; i < 21; i++)
		{
			numSlidePtr[i] = numSlide[i];
		}
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
		for (int i = 0; i < 20; i++)
		{
			if (num[i] == 20)
			{
				*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = ' ';
				*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = ' ';
				continue;
			}
			if ((num[i] / 10) == 0)
			{
				*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = num[i] + 48;
				*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = ' ';
			}
			else
			{
				*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = num[i] / 10 + 48;
				*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = num[i] % 10 + 48;
			}
		}
		while (true)
		{
			system("cls");
			for (int i = 0; i < 21; i++)
			{
				cout << numSlidePtr[i] << endl;
			}
			if (checkComplete(numSlidePtr))
			{
				break;
			}
			int nkey = 0;
			cout << "����Ű�� ���� ������ ������ �Է��ϼ��� (Space Bar : ġƮ): ";
			while (true)
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
						for (int i = 0; i < 20; i++)
						{
							if (num[i] == 20)
							{
								*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = ' ';
								*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = ' ';
								continue;
							}
							if ((num[i] / 10) == 0)
							{
								*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = num[i] + 48;
								*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = ' ';
							}
							else
							{
								*(numSlide[2 + (i / 4) * 4] + 4 + ((i % 4) * 8)) = num[i] / 10 + 48;
								*(numSlide[2 + (i / 4) * 4] + 5 + ((i % 4) * 8)) = num[i] % 10 + 48;
							}
						}
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
			char temp;
			char temp2;
			case LEFT:
				temp = *(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 - 1) * 8));
				temp2 = *(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 - 1) * 8));
				for (int i = 0; i < 8; i++)
				{
					system("cls");
					if (*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 - 1) * 8) + i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 - 1) * 8) + i) = ' ';
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 - 1) * 8) + i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 - 1) * 8) + i) = ' ';
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 - 1) * 8) + i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 - 1) * 8) + i) = temp;
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 6 + ((blank % 4 - 1) * 8) + i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 6 + ((blank % 4 - 1) * 8) + i) = temp2;
					}
					for (int i = 0; i < 21; i++)
					{
						cout << numSlidePtr[i] << endl;
					}
					Sleep(1000);
				}
				num[blank] = num[blank - 1];
				num[blank - 1] = 20;
				blank--;
				break;
			case RIGHT:
				temp = *(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 + 1) * 8));
				temp2 = *(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 + 1) * 8));
				for (int i = 0; i < 8; i++)
				{
					system("cls");
					if (*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 + 1) * 8) - i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 + 1) * 8) - i) = ' ';
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 + 1) * 8) - i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 5 + ((blank % 4 + 1) * 8) - i) = ' ';
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 + 1) * 8) - i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 4 + ((blank % 4 + 1) * 8) - i) = temp2;
					}
					if (*(numSlide[2 + (blank / 4) * 4] + 3 + ((blank % 4 + 1) * 8) - i) != '|')
					{
						*(numSlide[2 + (blank / 4) * 4] + 3 + ((blank % 4 + 1) * 8) - i) = temp;
					}
					for (int i = 0; i < 21; i++)
					{
						cout << numSlidePtr[i] << endl;
					}
					Sleep(1000);
				}
				num[blank] = num[blank + 1];
				num[blank + 1] = 20;
				blank++;
				break;
			case UP:
				temp = *(numSlide[2 + (blank / 4 - 1) * 4] + 4 + ((blank % 4) * 8));
				temp2 = *(numSlide[2 + (blank / 4 - 1) * 4] + 5 + ((blank % 4) * 8));
				for (int i = 0; i < 4; i++)
				{
					system("cls");
					if (*(numSlide[2 + (blank / 4 - 1) * 4 + i] + 4 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[2 + (blank / 4 - 1) * 4 + i] + 4 + ((blank % 4) * 8)) = ' ';
					}
					if (*(numSlide[2 + (blank / 4 - 1) * 4 + i] + 5 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[2 + (blank / 4 - 1) * 4 + i] + 5 + ((blank % 4) * 8)) = ' ';
					}
					if (*(numSlide[3 + (blank / 4 - 1) * 4 + i] + 4 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[3 + (blank / 4 - 1) * 4 + i] + 4 + ((blank % 4) * 8)) = temp;
					}
					if (*(numSlide[3 + (blank / 4 - 1) * 4 + i] + 5 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[3 + (blank / 4 - 1) * 4 + i] + 5 + ((blank % 4) * 8)) = temp2;
					}
					for (int i = 0; i < 21; i++)
					{
						cout << numSlidePtr[i] << endl;
					}
					Sleep(1000);
				}
				num[blank] = num[blank - 4];
				num[blank - 4] = 20;
				blank -= 4;
				break;
			case DOWN:
				temp = *(numSlide[2 + (blank / 4 + 1) * 4] + 4 + ((blank % 4) * 8));
				temp2 = *(numSlide[2 + (blank / 4 + 1) * 4] + 5 + ((blank % 4) * 8));
				for (int i = 0; i < 4; i++)
				{
					system("cls");
					if (*(numSlide[2 + (blank / 4 + 1) * 4 - i] + 4 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[2 + (blank / 4 + 1) * 4 - i] + 4 + ((blank % 4) * 8)) = ' ';
					}
					if (*(numSlide[2 + (blank / 4 + 1) * 4 - i] + 5 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[2 + (blank / 4 + 1) * 4 - i] + 5 + ((blank % 4) * 8)) = ' ';
					}
					if (*(numSlide[1 + (blank / 4 + 1) * 4 - i] + 4 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[1 + (blank / 4 + 1) * 4 - i] + 4 + ((blank % 4) * 8)) = temp;
					}
					if (*(numSlide[1 + (blank / 4 + 1) * 4 - i] + 5 + ((blank % 4) * 8)) != '-')
					{
						*(numSlide[1 + (blank / 4 + 1) * 4 - i] + 5 + ((blank % 4) * 8)) = temp2;
					}
					for (int i = 0; i < 21; i++)
					{
						cout << numSlidePtr[i] << endl;
					}
					Sleep(1000);
				}
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
		char correctNumSlide[21][34] = { "---------------------------------",
										 "|       |       |       |       |",
										 "|   1   |   2   |   3   |   4   |",
										 "|       |       |       |       |",
										 "---------------------------------",
										 "|       |       |       |       |",
										 "|   5   |   6   |   7   |   8   |",
										 "|       |       |       |       |",
										 "---------------------------------",
										 "|       |       |       |       |",
										 "|   9   |   10  |   11  |   12  |",
										 "|       |       |       |       |",
										 "---------------------------------",
										 "|       |       |       |       |",
										 "|   13  |   14  |   15  |   16  |",
										 "|       |       |       |       |",
										 "---------------------------------",
										 "|       |       |       |       |",
										 "|   17  |   18  |   19  |       |",
										 "|       |       |       |       |",
										 "---------------------------------" };
		char* correctNumSlidePtr[21];
		for (int i = 0; i < 21; i++)
		{
			correctNumSlidePtr[i] = correctNumSlide[i];
		}

		for (int i = 0; i < 21; i++)
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