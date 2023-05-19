#include "10_과제2.h"
/*
과제2. 우리 가족은 말이죠...

- 클래스를 활용해 우리 가족을 소개하는 내용을 출력한다.

※ 객체 지향적으로 구성한다.
*/


Family::Family()
{
	cout << "가족 구성원의 수를 입력하세요 : ";
	cin >> familyN;
	fM = new FamilyMember[familyN];
}

Family::~Family()
{

}

void Family::printFamily()
{
	if (fM != NULL)
	{
		for (int i = 0; i < familyN; i++)
		{
			fM[i].printFamilyMember();
		}
	}
}