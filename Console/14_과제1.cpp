#include "14_����1.h"

/*
���� 1. ���Ϳ� ������...

- ���� �Լ��� "ȿ�Ｚ" �ְ� "����꼺"�ְ� ������ ������ �ݿ��Ͽ� ������ �´�.

- �Լ� ������ �ǵ��� �ʴ´�.

- �ʱ�ȭ ���
*/
#include "14_����1.h"

Vector::Vector()
{

}

Vector::~Vector()
{

}

void Vector::sampleVector(vector<int> valueList)
{
	for (intVIterator = valueList.begin(); intVIterator != valueList.end(); ++intVIterator)
	{
		intVector.push_back(*intVIterator);
	}
	for (intVIterator = intVector.begin(); intVIterator != intVector.end(); ++intVIterator)
	{
		cout << *intVIterator << endl;
	}
}

void Vector::sampleSTVector(vector<STData> valueList)
{
	for (structVIterator = valueList.begin(); structVIterator != valueList.end(); ++structVIterator)
	{
		structVector.push_back(*structVIterator);
	}
	for (structVIterator = structVector.begin(); structVIterator != structVector.end(); ++structVIterator)
	{
		cout << structVIterator->m_nValue << "\t" << structVIterator->m_oString << endl;
	}
}

void Vector::practiceVector(void)
{
	vector<int> testVector;
	testVector.push_back(0);
	testVector.push_back(5);
	testVector.push_back(2);
	vector<STData> testVector2;
	STData struct1 = { 29, "�ڻ���" };
	STData struct2 = { 25, "�ڱԸ�" };
	STData struct3 = { 27, "������" };
	testVector2.push_back(struct1);
	testVector2.push_back(struct2);
	testVector2.push_back(struct3);
	sampleVector(testVector);
	sampleSTVector(testVector2);
}