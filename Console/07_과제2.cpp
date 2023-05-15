/*
string 사용 금지
과제2. 문자열 과제 (손코딩)

- 문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
ㄴ EX) ABCD -> DCBA

- 있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력한다.
ㄴ EX) ASDFG -> AFDSG

- 주민번호를 입력하고 -이 제거된 주민번호로 출력한다.
ㄴ EX) 1234567-12345678 -> 123456712345678

한줄 조사. 사용자 정의 자료형

- 노트에 적어온다.

- 비유할 것 생각해 온다.
*/

#include"07_과제2.h"

namespace ASSIGNMENT_2
{
	void backwardsString()
	{
		char c[500];
		cout << "문자열을 입력하세요 : ";
		cin >> c;
		int stringSize;
		for (int i = 0; i < 500; i++)
		{
			if (c[i] == '\0')
			{
				stringSize = i;
				break;
			}
		}
		for (int i = stringSize - 1; i >= 0; i--)
		{
			cout << c[i];
		}
		cout << endl;
	}

	void evenBackwardsString()
	{
		char c[500];
		cout << "문자열을 입력하세요 : ";
		cin >> c;
		int stringSize;
		for (int i = 0; i < 500; i++)
		{
			if (c[i] == '\0')
			{
				stringSize = i;
				break;
			}
		}
		for (int i = 0; i < stringSize; i++)
		{
			if (i % 2 == 0)
			{
				cout << c[i];
			}
			else
			{
				if (stringSize % 2 == 0)
				{
					cout << c[stringSize - i];
				}
				else
				{
					cout << c[stringSize - i - 1];
				}
			}
		}
		cout << endl;
	}
	
	void noHyphen()
	{
		char c[500];
		bool isResidentNumber = false;
		int stringSize;
		do
		{
			cout << "주민번호를 입력하세요 (EX 123456-1234567): ";
			cin >> c;
			for (int i = 0; i < 500; i++)
			{
				if (c[i] == '\0')
				{
					stringSize = i;
				}
			}
			if (stringSize != 14)
			{
				continue;
			}
			int count = 0;
			for (int i = 0; i < stringSize; i++)
			{
				if (i == 6)
				{
					if (c[i] == '-')
					{
						count++;
					}
					else
					{
						break;
					}
				}
				else
				{
					if (isdigit(c[i]))
					{
						count++;
					}
					else
					{
						break;
					}
				}
			}
			if (count == 14)
			{
				break;
			}
		} while (true);
		for (int i = 0; i < stringSize; i++)
		{
			if (c[i] == '-')
			{
				continue;
			}
			else
			{
				cout << c[i];
			}
		}
	}
}