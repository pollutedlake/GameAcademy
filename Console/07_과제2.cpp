/*
string ��� ����
����2. ���ڿ� ���� (���ڵ�)

- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ABCD -> DCBA

- �ִ� �״�θ� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ASDFG -> AFDSG

- �ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
�� EX) 1234567-12345678 -> 123456712345678

���� ����. ����� ���� �ڷ���

- ��Ʈ�� ����´�.

- ������ �� ������ �´�.
*/

#include"07_����2.h"

namespace ASSIGNMENT_2
{
	void backwardsString()
	{
		char c[500];
		cout << "���ڿ��� �Է��ϼ��� : ";
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
		cout << "���ڿ��� �Է��ϼ��� : ";
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
			cout << "�ֹι�ȣ�� �Է��ϼ��� (EX 123456-1234567): ";
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