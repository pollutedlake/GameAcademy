/*
과제1. 주민번호 생성기

- 시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
ㄴ EX : 1975 / 75

- 월과 일을 처리 (2자리, 1자리 처리)
ㄴ EX : 06 / 6

- 예외 처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.

- 성별 선택(남자는 1또는 3/ 여자는 2또는 4)
ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정

- 마지막 6자리는 랜덤으로 출력
ㄴ예외처리 : 단, 0이 나오면 안된다.
string 사용 금지
*/
#include "07_과제1.h"

namespace ASSIGNMENT_1
{
	void createResidentN()
	{
		char input[500];
		char residentN[14];
		int month;
		int day;
		bool inputCorrect = false;
		do
		{
			cout << "생년을 입력하세요(EX 1995 OR 95) : ";
			cin >> input;
			int inputSize;
			for (int i = 0; i < 500; i++)
			{
				if (input[i] == '\0')
				{
					inputSize = i;
					break;
				}
			}
			if (inputSize != 4 && inputSize != 2)
			{
				continue;
			}
			int count = 0;
			for (int i = 0; i < inputSize; i++)
			{
				if (input[i] >= 48 && input[i] <= 58 ? true : false)
				//if (isdigit(input[i]))
				{
					count++;
				}
				else {
					break;
				}
			}
			if (count == inputSize)
			{
				residentN[0] = input[inputSize - 2];
				residentN[1] = input[inputSize - 1];
				break;
			}
		} while (true);
		do
		{
			do
			{
				cout << "월을 입력하세요(EX 08 OR 8) : ";
				cin >> input;
				int inputSize;
				for (int i = 0; i < 500; i++)
				{
					if (input[i] == '\0')
					{
						inputSize = i;
						break;
					}
				}
				if (inputSize != 2 && inputSize != 1)
				{
					continue;
				}
				int count = 0;
				for (int i = 0; i < inputSize; i++)
				{
					if (isdigit(input[i]))
					{
						count++;
					}
					else {
						break;
					}
				}
				if (count == inputSize)
				{
					if (inputSize == 2)
					{
						month = ((int)input[0] - 48) * 10 + (int)input[1] - 48;
					}
					else
					{
						if (input[0] == '0')
						{
							continue;
						}
						month = (int)input[0] - 48;
					}
					break;
				}
			} while (true);
			do
			{
				cout << "일을 입력하세요 : (EX 07 OR 7)";
				cin >> input;
				int inputSize = 0;
				for (int i = 0; i < 500; i++)
				{
					if (input[i] == '\0')
					{
						inputSize = i;
						break;
					}
				}
				if (inputSize != 2 && inputSize != 1)
				{
					continue;
				}
				int count = 0;
				for (int i = 0; i < inputSize; i++)
				{
					if (isdigit(input[i]))
					{
						count++;
					}
					else {
						break;
					}
				}
				if (count == inputSize)
				{
					if (inputSize == 2)
					{
						day = ((int)input[0] - 48) * 10 + (int)input[1] - 48;
					}
					else
					{
						if (input[0] == '0')
						{
							continue;
						}
						day = (int)input[0] - 48;
					}
					break;
				}
			} while (true);
			if (month > 7)
			{
				if (month % 2 == 1)
				{
					if (day < 32)
					{
						break;
					}
				}
				else
				{
					if (day < 31)
					{
						break;
					}
				}
			}
			else
			{
				if (month == 2)
				{
					if (day < 29)
					{
						break;
					}
				}
				else
				{
					if (month % 2 == 1)
					{
						if (day < 32)
						{
							break;
						}
					}
					else
					{
						if (day < 31)
						{
							break;
						}
					}
				}
			}
		} while (true);
		residentN[2] = month / 10 + 48;
		residentN[3] = month % 10 + 48;
		residentN[4] = day / 10 + 48;
		residentN[5] = day % 10 + 48;
		residentN[6] = '-';
		char sex[500];
		cout << "성별을 입력하세요(남자, 여자, 그 외의 값 : 랜덤으로 결정) :";
		cin >> sex;
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> residentNRange(1, 9);
		uniform_int_distribution<int> sexRange(1, 2);
		if (residentN[0] > 50)
		{
			if (sex == "남자")
			{
				residentN[7] = '1';
			}
			else if (sex == "여자")
			{
				residentN[7] = '2';
			}
			else
			{
				residentN[7] = sexRange(rnd) + 48;
			}
		}
		else
		{
			if (sex == "남자")
			{
				residentN[7] = '3';
			}
			else if (sex == "여자")
			{
				residentN[7] = '4';
			}
			else
			{
				residentN[7] = sexRange(rnd) + 49;
			}
		}
		for (int i = 8; i < 14; i++)
		{
			residentN[i] = residentNRange(rnd) + 48;
		}
		cout << "주민 번호 : ";
		for (int i = 0; i < 14; i++)
		{
			cout << residentN[i];
		}
		cout << endl;
	}
}