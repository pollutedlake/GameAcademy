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
		cout << "�����մϴ�!.\n";
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