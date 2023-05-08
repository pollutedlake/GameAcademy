#include<iostream>
using namespace std;

#pragma region 조건문
/*

▶ 조건문이란?

- 프로그램이 실행되는 동안 정해져 있는 경우의 수에 맞춰서 서로 다른 결과를 도출하기 위한 문법을 의미한다.

- 조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능

＊ C / C++ 언어 조건문의 종류
ㄴ if ~ else문
ㄴ switch ~ case 조건문

▶ if ~ else 문

-조건적 실행 (조건에 따라 실행 유무)

- 조건을 만족하는 if문을 발견하면 나머지 if문을 건너띈다.

- if와 else가 만나서 이루는 문장의 수는 둘이 아니라 하나

- if ~ else문에서 조건의 만족여부 검사는 위에서 아래로 절차지향적

- 조건이 만족되어 해당 블록을 실행하고 나면 마지막 else까지도 건너띈다.

- 조건을 만족하지 않으면 마지막 else문을 실행하는 구조

EX)
if (조건식)
{
	조건식이 참이면 실행될 코드
}

- 위 조건식의 if문이 성립 안되었고 이 조건식이 참이라면 실행
else if (조건식) {
	조건식이 참이면 실행될 코드
 }
 - 나머지
 else {
	위 조건들이 만족되지 않으면 실행될 코드
 }
 
 ▶ switch문

 - switch문을 사용하는 경우는 일일히 조건별로 셋팅을 해주기가 용이하기 때문에 상태 변화, 조건이 많은 경우에 사용하면 효율을 낼 수 있는 문법

 - 그리고 if문과 매우 흡사하다는 특징이 있으며 switch문으로 작성이 되는 로직은 if문으로 전부 교체가 가능하다.

 EX)

 switch (인자 값(Data Type)) {
	case 1:
	default:
		break;
 }

 ㄴ 인자 값에는 int형과 char형이 올 수 있다.
 ㄴ 하지만 주로 int형을 많이 쓴다.

 - switch문은 인자 값에 따라서 실행 영역을 결정한다.
	ㄴ EX) 인자 값이 1이면 case 1: 이 실행되고
		   인자 값이 2이면 case 2: 가 실행된다.
		   
- switch ~ case 조건문의 default 키워드는 if ~ else 조건문의 else문에 해당하는 역할을 수행한다.

- 단, switch ~ case 조건문은 if ~ else 조건문과는 달리 범위에 해당하는 조건을 줄 수 없을뿐더러 조건문으로 사용될 수 있는 자료형은 정수만 취급

※ 정수 이외에 값을 줄 수는 있지만 올바른 결과를 출력하지는 않는다.

▶ C / C++ 언어 제어문의 종류

1. return
ㄴ 조건문일때는 다시 돌려 보낸다. / 함수에서는 값을 반환 -> 초기화

2. continue
ㄴ 조건문일때는 연산을 하지 않고 건너띈다. / 반복문에서는 바로 이전 문항으로

3. break
ㄴ 만나면 멈춘다. / while문 같은 경우는 반복문을 빠져 나간다.

4. goto
ㄴ 보통 점프문으로 불리며 goto에 라벨을 지정하면 중간에 있는 코드를 무시하고 해당 라벨로 이동한다.

※ break문은 반복문을 탈출하는 용도로 많이 사용된다.
ㄴ 반복문을 탈출하는 용도이기 때문에 사용유무에 따라 결과가 완전히 바뀐다.
*/
#pragma endregion

void main() {
	int nOperator;
	cout << "내가 입력한 숫자 = ";
	cin >> nOperator;

	// 만약
	if (nOperator == 0) {
		cout << "리그 오브 레전드" << endl;
	}

	// 또는
	else if (nOperator == 1) {
		cout << "디아블로" << endl;
	}

	// 나머지
	else {
		cout << "블러드" << endl;
	}

	cout << "\n";

	int inputNumber;

	cout << "0번, 1번, 2번중 하나를 선택하세요." << endl;
	cout << "inputNumber = ";
	cin >> inputNumber;

	// 가독성 향상
	// ㄴ 관리가 편하다.
	switch (inputNumber) {
	case 0:
		cout << "0번 입력시 출력" << endl;
		break;

	case 1:
		cout << "1번 입력시 출력" << endl;
		break;

	case 2:
		cout << "2번 입력시 출력" << endl;
		break;

		// else
	default:
		cout << "그외 입력시 출력" << endl;
		break;
	}

	cout << "\n";

	/*
	▶ C/C++ 언어의 증/감 연산자 종류

	- 전위 증/감 연산자
	- 후위 증/감 연산자

	★
	▷ 전위 증감 연산자 VS 후위 증감 연산자

	- 전위 증감 연산자는 해당 변수의 값을 증감 시킨 후 연산에 활용하는 반면, 후위 증감 연산자는 연산에 활용이 된 후 해당 변수의 값이 변경된다.
	*/

	int nValue = 10;

	cout << "증/ 감 연산 결과 출력 = " << endl;
	
	// 11
	cout << "전위 증가 연산: " << ++nValue << endl;
	// 10
	cout << "전위 감가 연산: " << --nValue << endl;
	// 10
	cout << "후위 증가 연산: " << nValue++ << endl;
	// 11
	cout << "후위 감가 연산: " << nValue-- << endl;

	// 10
	cout << "nValue 값 : " << nValue << endl;

	cout << '\n';

	// 위와 같은 연산 방식에는 논리적으로 틀린다고 하더라도 잘못된 결과만 출력되고 끝난다.
	// 하지만 메모리 접근이었다면 얄짤없이 터진다.

	int nValueA, nValueB, nValueC, nValueD;
	nValueA = nValueB = nValueC = nValueD = 10;

	// 참
	if ((nValueA == nValueB++) && (nValueC++ < ++nValueD)) {
		cout << "증/감 연산 결과 출력 = " << endl;

		// 10
		cout << nValueA << endl;
		// 11
		cout << nValueB << endl;
		// 11
		cout << nValueC << endl;
		// 11
		cout << nValueD << endl;
	}

	// cout << "거짓이라면 내가 출력된다." << endl;
	cout << '\n';

	for (int i = 2; i < 100 + 2; i++) {

		// 둘 중 누가 더 빠른가?
		if (i % 2 != 0) continue;
		cout << "출력값: " << i << endl;
		

		if (i % 2 != 0) {
			cout << "출력값: " << i << endl;
		}
	}

	cout << '\n';
	/*
	▶ goto문

	- 근래 추세에는 거의 사용안한다.
	ㄴ 가독성을 떨어뜨리고 스파게티 코드를 만드는데 일조한다.
	ㄴ 사용하기 전에 정말 필요한가? 라는 의문을 반드시 갖도록

	EX)
	goto 레이블;
	레이블:
	*/

	for (int i = 2; i < 10; i += 1) {
		for (int j = 1; j < 10; j += 1) {
			if (i % 2 == 0) {
				goto EXIT_1;
			}

			if (i % 5 == 0) {
				goto EXIT_2;		// for문을 끝마치기 전에 나가서 메모리 누수 발생
			}

			cout << i << " x " << j << " = " << i * j << endl;
		}
	EXIT_1:
		cout << "i 단을 출력 후 실행" << i << endl << endl;
	}
EXIT_2:
	cout << "반복문 탈출" << endl;
}