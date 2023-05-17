#include<iostream>

using namespace std;

#pragma region 포인터
/*
 ▶ 포인터

 - 어떠한 값을 저장하는게 아닌 어떠한 값의 주소를 저장하는것
 ㄴ Address

 - 메모리의 주소를 의미하며 C/C++언어는 포인터 문법을 통해서 데이터에 간접적으로 접근하는 것이 가능하다.

 - 포인터를 활용하면 서로 다른 영역에 있는 변수라 하더라도 값을 변경하는게 가능하다.

 ※ 심플하게 기억할것
 - 1. 포인터 : 카리키는 놈, 주소를 담는 그릇
 - 2. 어떠한 값의 주소 : 해당 값이 저장된 컴퓨터 메모리상의 주소
 - 3. * : 해당 메모리에 있는 데이터 값을 가져오는 기능을 한다.
 - 4. & : 주소값을 반환하는 연산자
 - 5. -> : 포인터에서 자주 사용된다.

 ※ 기본적으로 프로그래머는 안정성을 위해서 마음대로 메모리 상의 어떤 위치든 접근하는 것이 불가능하다.
 - 변수의 할당을 통해서 메모리의 사용 권한이 주어진 위치만 포인터를 통해서 조작하는 것이 가능

 ▶ C/C++ 언어 포인터에 자료형이 필요한 이유

 - 포인터는 단순히 메모리 주소에 불가하기 때문에 해당 정보만을 가지고는 메모리를 얼마만큼의 크기로 값을 저장하거나 읽어들일지 판단할 수 없다.

 - 그렇기 때문에 포인터의 자료형을 통해서 저장 및 읽어들일 메모리의 크기를 명시해 줘야 한다.

 - 주의
 ※ 고로 포인터와 해당 포인터에 저장 할 변수의 자료형은 일치해야 한다.

 - 메모리의 주소만을 보관하고 싶다면 특정 자료형을 명시하는 것이 아니라 void* 형으로 선언하는 것도 가능하다.

 - 이를 보이드 포인터라고 부르며 보이드 포인터는 어떠한 자료형의 메모리 주소도 보관하는 것이 가능하다.

 EX)
 int nValue = 0;
 float fValue = 0.0f;
 double dbValue = 0.0f;

 int* pnValue = &nValue;
 float *pValue = &fValue;
 doulblue * pdbValue = &dbValue;

 - 포인터는 메모리의 주소를 보관하는 역할을 하기 때문에 포인터의 크기는 "모두" 동일하다.

 - 그렇기 때문에 int*, float*, double* 등의 크기가 모두 같다.
 ㄴ 단, 운영체제 및 사용하는 개발 환경에 따라서 크기는 바뀐다.

 ＊ 함수의 종류

 - Call By Value : 값에 의한 전달
 ㄴ int add(int a, int b);

 - Call By Reference : 주소값의 전달
 ㄴ int add(int* a, int* b);
*/
#pragma endregion 포인터

void ExampleP(int* n)
{
	*n = *n * *n;
}

void LinePrint()
{
	cout << "=========================================" << endl;
}

void main()
{
	cout << "포인터" << endl;
	LinePrint();

	/*
	- C/C++ 언어의 포인터 선언 방법
	int nValue = 0;					-> 메모리의 특정 영역에 4바이트 공간 할당
	int* pnPointer = &nValue;		-> nValue가 할당 된 메모리 공간의 첫 주소를 할당하겠다.
	*/

	int valueA = 10;

	int* pValueA = &valueA;
	int** ppValueA = &pValueA;
	
	// pValueA의 주소값
	cout << ppValueA << endl;

	// 10
	cout << *(*ppValueA) << endl;

	// valueA의 주소값
	cout << &valueA << endl;

	// 10
	cout << valueA << endl;

	// valueA의 주소값
	cout << pValueA << endl;

	// 10
	cout << *pValueA << endl;

	LinePrint();

	int valueB = 3;
	int* pValueB = nullptr;

	// 3
	cout << valueB << endl;

	// valueB의 주소값
	cout << &valueB << endl;

	if (pValueB == nullptr)
	{
		pValueB = &valueB;
	}
	//pValueB = &valueB;		// pValueB가 비어있는지 확인해야 한다. 이렇게 하면 안됨

	// valueB의 주소값
	cout << pValueB << endl;

	// 3
	cout << *pValueB << endl;

	// pValueB의 주소값
	cout << &pValueB << endl;

	/*
	- 사용함에 있어서 주의를 필요로 하는 문법 -> 포인터

	- 포인터를 초기화 하지 않고 값을 바꾸면....

	EX)
	int* pValueC;
	pValueC = 100;

	- pValueC를 초기화 하지 않았다면 pValueC는 쓰레기 값을 가지고 있는데 이 값은 어디에서 쓰이고 있는 값일 수도 있다.

	- 빈자리였다면 다행이지만 아니였다면 쓰이는 값이 변경되는 것이므로 치명적인 오류가 발생한다.

	- 그래서 포인터가 가리키고 있는 값을 변경할 때는 반드시 확인한 이후 변경하는 습관을 들여야 한다.
	ㄴ C/C++ 프로그래머

	※ 이러한 패턴은 예외처리를 진행할 때도 동일하게 적용된다.
	*/
}