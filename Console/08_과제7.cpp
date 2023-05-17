/*
과제2. 애니메이션 숫자 슬라이드

- 포인터를 활용해서 해온다.

- 룰은 동일

한줄 조사. 클래스

- 노트에 적어온다.

- 이론에 기반해 짧고 명료하게 프로그래머스럽게 정리해 온다.
*/
#include"08_과제7.h"

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
			cout << "방향키를 통해 움직일 방향을 입력하세요 (Space Bar : 치트): ";
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
								cout << "\n그 쪽으로는 갈 수 없습니다. 다시 입력해주세요. (Space Bar : 치트): ";
								continue;
							}
							break;
						case RIGHT:
							if (blank % 4 == 3)
							{
								cout << "\n그 쪽으로는 갈 수 없습니다. 다시 입력해주세요. (Space Bar : 치트): ";
								continue;
							}
							break;
						case UP:
							if (blank / 4 == 0)
							{
								cout << "\n그 쪽으로는 갈 수 없습니다. 다시 입력해주세요. (Space Bar : 치트): ";
								continue;
							}
							break;
						case DOWN:
							if (blank / 4 == 4)
							{
								cout << "\n그 쪽으로는 갈 수 없습니다. 다시 입력해주세요. (Space Bar : 치트): ";
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
						cout << "\n이동할 방향을 방향키로 입력해주세요 (Space Bar : 치트): ";
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
		cout << "축하합니다." << endl;
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