/*
* - 과제 1 + 2 + 3 + 4 중 3개 미만으로 할시 깜지 추가
* 
과제 1. rand()를 활용한 랜덤값 출력

int_64
- 900경부터 -> 923경까지의 랜덤한 숫자를 뽑으시오.

- 필수 : 분포도
ㄴ 총 10번의 분포도를 화면에 출력하고 확률을 표시한다.
*/
#include "06_과제3.h"

namespace ASSIGNMENT_3
{
	void randomDevice()
	{
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			unsigned __int64 num = 9 * 1000000000000000000;
			num += (rand() % 23) * 10000000000000000;
			num += rand() % 99999 * 100000000000;
			num += rand() % 99999 * (__int64)1000000;
			num += rand() % 99999 * (__int64)10;
			num += rand() % 9;
			cout << num << endl;
		}
	}
}