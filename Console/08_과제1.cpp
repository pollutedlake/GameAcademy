/*
과제 1. 로또 당첨기
구조체 열거형

- 당첨번호 6개 + 보너스 번호 1개

- 6개 입력 받는다.

- 판정

- 1등 : 당첨번호 6개와 내가 입력한 6개의 숫자가 같을 때

- 2등 : 당첨 번호 5개 + 보너스 번호 1개와 내가 입력한 숫자 6개가 같을 때

- 3등 : 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을 때

- 4등 : 당첨 번호 4개와 내가 입력한 4개의 숫자가 같을 때

- 5등 : 당첨 번호 3개와 내가 입력한 3개의 숫자가 같을 때

*/
#include "08_과제1.h"

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
				cout << i + 1 << "번째 번호를 입력하세요(1 ~ 45) : ";
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
			cout << "꽝\n";
			return;
		}
		switch (count)
		{
		case 6:
			cout << "1등입니다.\n";
			break;
		case 5:
			if (player[bonnusN - 1] == ++winNums[bonnusN - 1])
			{
				cout << "2등입니다.\n";
			}
			else
			{
				cout << "3등입니다.\n";
			}
			break;
		case 4:
			cout << "4등입니다.\n";
			break;
		case 3:
			cout << "5등입니다.\n";
			break;
		}
	}
}