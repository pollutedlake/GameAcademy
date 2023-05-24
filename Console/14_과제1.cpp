#include "14_과제1.h"

/*
과제 1. 벡터와 만나면...

- 샘플 함수를 "효울성" 있고 "재생산성"있게 본인의 생각을 반영하여 구현해 온다.

- 함수 원형은 건들지 않는다.

- 초기화 출력
*/
#include "14_과제1.h"

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
	STData struct1 = { 29, "박상현" };
	STData struct2 = { 25, "박규리" };
	STData struct3 = { 27, "김유민" };
	testVector2.push_back(struct1);
	testVector2.push_back(struct2);
	testVector2.push_back(struct3);
	sampleVector(testVector);
	sampleSTVector(testVector2);
}