/*
����1. �ֹι�ȣ ������

- �����ϸ� ���ϴ� ������ �Է¹޴´�. (4�ڸ�, 2�ڸ� ó��)
�� EX : 1975 / 75

- ���� ���� ó�� (2�ڸ�, 1�ڸ� ó��)
�� EX : 06 / 6

- ���� ó�� : 31���� �ִ� �ް� 30�ϱ����� �ִ� ��, �׸��� 2���� ����ó�� �Ѵ�.

- ���� ����(���ڴ� 1�Ǵ� 3/ ���ڴ� 2�Ǵ� 4)
�� ���� �ٸ� ���� �Է��ϸ� ������ �������� ����

- ������ 6�ڸ��� �������� ���
������ó�� : ��, 0�� ������ �ȵȴ�.
string ��� ����
*/
#include "07_����1.h"

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
			cout << "������ �Է��ϼ���(EX 1995 OR 95) : ";
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
				cout << "���� �Է��ϼ���(EX 08 OR 8) : ";
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
				cout << "���� �Է��ϼ��� : (EX 07 OR 7)";
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
		cout << "������ �Է��ϼ���(����, ����, �� ���� �� : �������� ����) :";
		cin >> sex;
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> residentNRange(1, 9);
		uniform_int_distribution<int> sexRange(1, 2);
		if (residentN[0] > 50)
		{
			if (sex == "����")
			{
				residentN[7] = '1';
			}
			else if (sex == "����")
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
			if (sex == "����")
			{
				residentN[7] = '3';
			}
			else if (sex == "����")
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
		cout << "�ֹ� ��ȣ : ";
		for (int i = 0; i < 14; i++)
		{
			cout << residentN[i];
		}
		cout << endl;
	}
}