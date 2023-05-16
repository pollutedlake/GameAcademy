/*
���� 1. �ζ� ��÷��
����ü ������

- ��÷��ȣ 6�� + ���ʽ� ��ȣ 1��

- 6�� �Է� �޴´�.

- ����

- 1�� : ��÷��ȣ 6���� ���� �Է��� 6���� ���ڰ� ���� ��

- 2�� : ��÷ ��ȣ 5�� + ���ʽ� ��ȣ 1���� ���� �Է��� ���� 6���� ���� ��

- 3�� : ��÷ ��ȣ 5���� ���� �Է��� 5���� ���ڰ� ���� ��

- 4�� : ��÷ ��ȣ 4���� ���� �Է��� 4���� ���ڰ� ���� ��

- 5�� : ��÷ ��ȣ 3���� ���� �Է��� 3���� ���ڰ� ���� ��

*/
#include "08_����1.h"

namespace ASSIGNMENT_1
{
	void lotto()
	{
		int num;
		random_device oRandomDevice;
		mt19937_64 rnd(oRandomDevice());
		uniform_int_distribution<int> lottoNRange(1, 45);
		int player[45] = { 0 };
		int winNums[45] = { 0 };
		int bonnusN = lottoNRange(rnd);
		for (int i = 0; i < 6; i++)
		{
			int randN = lottoNRange(rnd);
			cout << randN << "\t";
			winNums[randN - 1]++;
		}
		cout << bonnusN << endl;
		int count = 0;
		
		for (int i = 0; i < 6; i++)
		{
			do
			{
				cout << i + 1 << "��° ��ȣ�� �Է��ϼ���(1 ~ 45) : ";
				cin >> num;
			} while (num < 1 || num > 45);
			player[num - 1]++;
		}
		for (int i = 0; i < 45; i++)
		{
			if (player[i] == 0)
			{
				continue;
			}
			if (winNums[i] != 0)
			{
				count += ((player[i] < winNums[i]) ? player[i] : winNums[i]);
			}
		}
		if (count < 3)
		{
			cout << "��\n";
			return;
		}
		switch (count)
		{
		case 6:
			cout << "1���Դϴ�.\n";
			break;
		case 5:
			if (player[bonnusN - 1] == ++winNums[bonnusN - 1])
			{
				cout << "2���Դϴ�.\n";
			}
			else
			{
				cout << "3���Դϴ�.\n";
			}
			break;
		case 4:
			cout << "4���Դϴ�.\n";
			break;
		case 3:
			cout << "5���Դϴ�.\n";
			break;
		}
	}
}