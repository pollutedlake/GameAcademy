#include "14_����1.h"

/*
���� 1. ���Ϳ� ������...

- ���� �Լ��� "ȿ�Ｚ" �ְ� "����꼺"�ְ� ������ ������ �ݿ��Ͽ� ������ �´�.

- �Լ� ������ �ǵ��� �ʴ´�.

- �ʱ�ȭ ���
*/
#include "14_����1.h"
#include <Windows.h>
//#define MAX_PATH	20;

Vector::Vector()
{

}

Vector::~Vector()
{

}

void Vector::sampleVector(vector<int> valueList)
{
	for (auto intVIterator = valueList.begin(); intVIterator != valueList.end(); ++intVIterator)
	{
		intVector.push_back(*intVIterator);
	}
	for (auto intVIterator = intVector.begin(); intVIterator != intVector.end(); ++intVIterator)
	{
		cout << *intVIterator << endl;
	}
}

void Vector::sampleSTVector(vector<STData> valueList)
{
	for (auto structVIterator = valueList.begin(); structVIterator != valueList.end(); ++structVIterator)
	{
		structVector.push_back(*structVIterator);
	}
	for (auto structVIterator = structVector.begin(); structVIterator != structVector.end(); ++structVIterator)
	{
		int nIndex = structVIterator - valueList.begin();
		cout << structVIterator->m_nValue << "\t" << structVIterator->m_oString << endl;
	}
	/*
	�� ��� ������ ���� �ݺ����� ��ȭ

	- C++�� �ᱹ ����̱� ������ �ð��� ������ ���� ������ �ǰ� ũ�� ���� ��ȭ�� �����.

	EX)
	for (STData stData : valueLsit)
	�� Range ��� for / �����̳� ��� for

	�� C != C++

	- printf �Լ��� &s ���� ���ڴ� C��� ��� ���ڿ��� ��ü�ϱ� ���� ������� �Ϲ����� ������δ� C++ ����� ���ڿ��� ǥ���ϴ� ���� �Ұ��� �ϴ�.

	- �׷��� ������ C++ ����� ���ڿ��� C_str() �Լ��� ���ؼ� C ��� ��Ÿ���� ���ڿ��� ǥ���ϴ� ���� �����ϴ�.
	*/
	for (STData stData : valueList)
	{
		printf("����ü ������ : %d, %s\n", stData.m_nValue, stData.m_oString.c_str());		// printf�� C, string�� C++�̱� ������ �����ʾ� ������ ���� ������. c_str()���
	}
}

void Vector::practiceVector(void)
{
	vector<int> testVector;
	for (int i = 0; i < 10; i++)
	{
		testVector.push_back(i + 1);
	}
	vector<STData> testVector2;
	for (int i = 0; i < 10; i++)
	{
		STData stData;
		stData.m_nValue = i + 1;
		stData.m_oString = to_string(i * 0.5f);
		testVector2.push_back(stData);
	}
	sampleVector(testVector);
	sampleSTVector(testVector2);

	int nNumStrings = 0;
	vector<string> oStringList;

	printf("���� �Է� : ");
	//scanf("%d", &nNumStrings);

	printf("\n ==== ���ڿ� �Է� ====\n");

	/*
	Iterator�� �ݵ�� begin() end()�� ����ؾ� �Ѵ�.

	���� ���� ��� ���������� �����͸� �����ϱ� ������ �������� ������ ���ʴ�� ����Ǿ� �ִ� �ݸ� �ʰ� ���� �����̳ʴ� �������� ������ �����̱� ������ ������ ������ �� ����.
	*/

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows -> �ִ� ���� 250 ~ 270
		char szString[MAX_PATH] = "";
		printf("%d ��° ���ڿ� �Է� : ", i + 1);
		//scanf("%s", szString);


		oStringList.push_back(szString);
	}

	cout << "===== ���ڿ� ��� =====" << endl;

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d ��° ���ڿ� ��� : %s\n", nIndex + 1, oIterator->c_str());
	}
}