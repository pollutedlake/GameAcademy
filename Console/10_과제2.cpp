#include "10_����2.h"
/*
����2. �츮 ������ ������...

- Ŭ������ Ȱ���� �츮 ������ �Ұ��ϴ� ������ ����Ѵ�.

�� ��ü ���������� �����Ѵ�.
*/


Family::Family()
{
	cout << "���� �������� ���� �Է��ϼ��� : ";
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