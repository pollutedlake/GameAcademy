#include <iostream>
// STL -> string
// ㄴ 메모리 블록이나 문자열을 다룰 수 있는 함수들을 포함
#include<string>
// wchar -> 유니코드 문자열을 다룰 때 사용한다.
#include<wchar.h>

using namespace std;

#pragma region 함수
/*
▶ 함수

- 음료수 자판기 (뭔가를 넣으면 뱉어낸다.)

▷ 사용하는 이유

- 중복 로직 제거
- 관리 용이함
- 가독성 향상
- 편리성

＊ 선언 방법
반환 자료형 함수이름 (입력 자료형(인자(수)))
{	<- 함수 시작
	함수 내용
}	<- 함수 끝

void main()
{

}

- 함수 이름 : 말 그대로 함수의 이름 (함수를 실행(호출)할 때 사용)
- 인수(인자) : 함수가 해야 할 일의 세부사항을 지정하며 함수의 작업거리
- 반환 자료형 : 함수가 리턴(반환)하는 값의 데이터 형이며 함수의 작업 결과
- 함수 내용 : {} 안에 함수의 실제 코드가 존재한다.

※ 함수의 이름은 기본적으로 유일해야 한다.
ㄴ 동일한 이름의 함수를 N개 이상 선언하는 것은 불가능하다.

▷ void형 함수란?

- 리턴(반환) 할 값이 없는 함수
- 함수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 입/출력이 없다라는 것을 명시한다.

※ 우리가 알게 모르게 사용한 함수들
ㄴ rand() : 랜덤값을 뽑는 "함수"
ㄴ sleep(1000) : 1초간 멈추게 해주는 "함수"

★ 함수 선언은 기본적으로 메인함수 윗쪽에 한다.

▷ C/C++ 언어의 함수 선언이 필요한 이유

- C/C++ 언어의 컴파일러는 기본적으로 파일의 내용을 위에서 아래로 해석한다.

- 이 때 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출할 경우 컴파일러가 이에 대한 내용을 모르기 때문에 에러가 발생한다.

- 그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 파일 어딘가에 존재한다는 여부를 알려줘야 한다.

- 즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미

- 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다. 
*/
#pragma endregion

// 함수 선언
void OutputValueA();

// int형을 받지만 반환 x
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// 문자열
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

// 사칙 연산
// 더하기
int GetAddValue(int numA, int numB);
// 뺄셈
int GetSubValue(int numA, int numB);
// 곱셈
int GetMultipleValue(int numA, int numB);
// 나누기 -> 반복문 -> 많이 느림
int GetDivideValue(int numA, int numB);

// 위에서 보듯이 함수의 이름은 기본적으로 중복이 되지 않아야 한다.
// ㄴ 이거 지금 해결할 수 있을까?
namespace NS_FUNC_A {
	void Sample() {
		cout << "내가 바로 SampleA 함수" << endl;
	}
}

namespace NS_FUNC_B {
	void Sample() {
		cout << "내가 바로 SampleB 함수" << endl;
	}
}

void main() {
	NS_FUNC_A::Sample();
	NS_FUNC_B::Sample();

	cout << '\n';

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);

	OutputString("과제가 너무 재밌다.");

	// ============================================

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringFunc("재밌다", "재밌어");
	OutputString(sResultB);

	nResultA = CheckingString("과제 더 내주세요", "과제 더 내주세요");

	OutputValueB(nResultA);

	cout << '\n';
	

	int numL = 0;
	int numR = 0;

	cout << "정수(2개) 입력 : " << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));

	/*
	- 이처럼 함수는 다양한 유형을 가질 수 있다.

	▶ C / C++ 언어의 함수 유형

	- 입력 O, 출력 O
	- 입력 O, 출력 X
	- 입력 X, 출력 O
	- 입력 X, 출력 X

	EX)
	void ShowInfo(int nAge, char* psName);
	ㄴ 입력 O, 출력 X
	int GetRandomValue(void);
	ㄴ 입력 X, 출력 O
	void SomeFunction(void);
	ㄴ 입력 X, 출력 X
	*/
}

/* 
- 적절한 입력 데이터와 출력 데이터가 있으면 해당 구문을 함수라고 지칭한다.
또한 C / C++ 언어는 함수 단위로 실행이 되기 때문에 컴퓨터의 명령문을 작성하기 위해서는 반드시 해당 구문을 함수 안에 작성해 줘야 한다.
*/

// {}

// 정석
void OutputValueA()
{
	cout << "내가 바로 함수다!" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// 사칙 연산 x
	// 여지 -> 논리 오류 -> 메모리
	return strA + strB;
	// 기본적으로 string은 문자열을 다룰 수 있는 다양한 기능을 포함한다.
	// append() : n문자열 뒤에 n2문자열을 붙여 넣는다.
	strA.append(strB);
}

int CheckingString(string strA, string strB)
{
	/*
	함수는 return 키워드를 통해서 함수의 종료 또는 결과값을 반환하는 것이 가능하며 함수의 결과 값은 입력과는 달리 하나의 결과만을 반환할 수 있다.
	*/

	// 같으면 1 / 다르면 0 반환
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}
