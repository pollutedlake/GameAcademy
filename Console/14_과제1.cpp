#include "14_과제1.h"

/*
과제 1. 벡터와 만나면...

- 샘플 함수를 "효울성" 있고 "재생산성"있게 본인의 생각을 반영하여 구현해 온다.

- 함수 원형은 건들지 않는다.

- 초기화 출력
*/
#include "14_과제1.h"
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
	▶ 언어 개정에 따른 반복문의 변화

	- C++도 결국 언어이기 때문에 시간이 지남에 따라서 개정이 되고 크고 작은 변화가 생긴다.

	EX)
	for (STData stData : valueLsit)
	ㄴ Range 기반 for / 컨테이너 기반 for

	▶ C != C++

	- printf 함수의 &s 서식 문자는 C언어 기반 문자열을 대체하기 위한 기능으로 일반적인 방법으로는 C++ 언어의 문자열을 표현하는 것이 불가능 하다.

	- 그렇기 때문에 C++ 언어의 문자열은 C_str() 함수를 통해서 C 언어 스타일의 문자열을 표현하는 것이 가능하다.
	*/
	for (STData stData : valueList)
	{
		printf("구조체 데이터 : %d, %s\n", stData.m_nValue, stData.m_oString.c_str());		// printf는 C, string은 C++이기 때문에 맞지않아 쓰레기 값이 찍힌다. c_str()사용
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

	printf("정수 입력 : ");
	//scanf("%d", &nNumStrings);

	printf("\n ==== 문자열 입력 ====\n");

	/*
	Iterator는 반드시 begin() end()를 명시해야 한다.

	벡터 같은 경우 선형적으로 데이터를 보관하기 때문에 데이터의 순서가 차례대로 보장되어 있는 반면 맵과 같은 컨테이너는 데이터의 순서가 비선형이기 때문에 순서를 보장할 수 없다.
	*/

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows -> 최대 길이 250 ~ 270
		char szString[MAX_PATH] = "";
		printf("%d 번째 문자열 입력 : ", i + 1);
		//scanf("%s", szString);


		oStringList.push_back(szString);
	}

	cout << "===== 문자열 출력 =====" << endl;

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d 번째 문자열 출력 : %s\n", nIndex + 1, oIterator->c_str());
	}
}