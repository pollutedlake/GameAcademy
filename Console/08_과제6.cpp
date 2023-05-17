/*
과제 1. 숫자 슬라이드

- 사이즈 : 5 x 4

- 시작위치 -> 우측 하단

- 치트 필수
ㄴ 치트키를 누르면 하나의 숫자를 제외하고 나머지 숫자는 정렬된다.
ㄴ 사용자가 마지막 조각을 맞추면서 프로그램이 끝나면 OK

- 일반적으로 게임 룰에 기반한 예외처리 해온다.
*/
#include"08_과제6.h"

namespace ASSIGNMENT_6
{
	void numSlide()
	{
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> shuffleRange(500, 999);
		uniform_int_distribution<int> numRange(0, 19);
		int num[20];
		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			num[i] = i + 1;
		}
		int shuffleN = shuffleRange(rnd);
		for (int j = 0; j < shuffleN; j++)
		{
			int dest = numRange(rnd);
			int sour = numRange(rnd);
			int temp = num[dest];
			num[dest] = num[sour];
			num[sour] = temp;
		}
		char* numSlide[5] = { "|   1   |   2   |   3   |   4   |",
							  "|   5   |   6   |   7   |   8   |",
							  "|   9   |   10  |   11  |   12  |",
							  "|   13  |   14  |   15  |   16  |",
							  "|   17  |   18  |   19  |       |"};
		for (int i = 0; i < 20; i++)
		{
			cout << num[i] << endl;
			if (num[i] == 20)
			{
				char temp = ' ';
				//strncpy(temp, numSlide[i/4], )
				*(numSlide[i / 4] + 4 + ((i % 4) * 8)) = ' ';
				//numSlide[i / 4][5 + ((i % 4) * 8)] = ' ';
				continue;
			}
			if ((num[i] / 10) == 0)
			{
				//numSlide[i / 4][4 + ((i % 4) * 8)] = num[i];
				//numSlide[i / 4][5 + ((i % 4) * 8)] = ' ';
			}
			else
			{
				//numSlide[i / 4][4 + ((i % 4) * 8)] = num[i] / 10;
				//numSlide[i / 4][5 + ((i % 4) * 8)] = num[i] % 10;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			cout << numSlide[i] << endl;
		}
		//while (checkComplete(numSlide))
		//{
		//
		//}
		cout << "축하합니다!.\n";
	}

	bool checkComplete(char* numSlide[5])
	{
		char* correctSlide[5] = { "|   1   |   2   |   3   |   4   |",
								  "|   5   |   6   |   7   |   8   |",
								  "|   9   |   10  |   11  |   12  |",
								  "|   13  |   14  |   15  |   16  |",
								  "|   17  |   18  |   19  |       |" };

		for (int i = 0; i < 5; i++)
		{
			if (strcmp(numSlide[i], correctSlide[i]) != 0)
			{
				return false;
			}
		}
		return true;
	}
}