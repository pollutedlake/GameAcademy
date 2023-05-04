#include<iostream>
#include<Windows.h>
using namespace std;

#pragma region 연산자
/*
▶ 연산자란?

- 프로그램이 동작할 때 정해져 있는 특정 역활을 수행하는 키워드
ㄴ 이를 연산자라고 한다.
ㄴ 연산자를 이용하면 다양한 프로그램 로직을 만들어 내는 것이 가능하다.

▷ 기본적인 연산자의 종류

- 산술 연산자 (+, -, *, /, %)
v - 비교 연산자 (==, !=, <, >, <=, >=)
- 할당 연산자 (=, +=, -=. *=, /= &=)
v - 비트 연산자 (&, |, ^)
- 논리 연산자 (&&, ||, |)
- 형변환 연산자 ((특정 자료형))

＊ 비교 연산자

num == num2;		->		num과 num2가 같다.
num != num2;		->		num과 num2가 다르다. (같지 않다.)
num < num2;			->		num이 num2 보다 작다.
num > num2;			->		num이 num2 보다 크다.
num <= num2;		->		num이 num2 보다 작거나 같다.
num <= num2;		->		num이 num2 보다 크거나 같다.

▷ 논리 연산자 (bool)

bool num;
num				->		num이 만족하면 실행한다.
num && num2		->		num과 num2의 조건이 "둘다 참"이라면 실행 (논리 AND)
num || num2		->		num과 num2의 조건이 "둘중 하나라도 참"이라면 실행 (논리 OR)
!num			->		num이 만족하지 않으면 실행한다. (논리 부정)

▷ 비트 연산자

- 비트 AND (&)
- 비트 OR (|)
- 비트 XOR (^)

▷ 형변환 연산자

- ((특정 자료형)) 변수명
ㄴ 사용할 때 생각을 많이 해라.
ㄴ Why..?

- C / C++ 언어는 형변환 연산자를 이용하면 간단하게 해당 변수의 자료형을 변경하는 것이 가능하다.

- 강제 형변환

- C 스타일의 명시적 형변환은 가독성이 떨어지고 버그가 생길 여지를 만든다.
ㄴ "강제" 형변환이기 때문

- 그래서 안정성을 우선시 한다면 캐스팅 연산자를 사용해야 한다.

C
EX) int num = 0;		->		(flot)num;

C++
EX) static_cast<int>(obj)		->		obj를 type으로 바꾼다.
ㄴ 원형 : static_cast<type>(obj)

C++ 타입 캐스팅 연산자

※ 한줄 조사

- static_cast
- dynamic_cast
- const_cast
- reinterpret_cast
*/
#pragma endregion

#pragma region 반복문
/*
▶ 반복문

- 프로그램의 특정 부분을 일정 횟수 이상 반복해서 실행하도록 하기 위한 문법
ㄴ 반복문을 이용하면 반복적으로 발생되는 구간을 간단하게 처리하는 것이 가능
ㄴ 문법을 잘 활용하면 편리함과 효율성이 수직 상승한다.

＊ C / C++ 언어 반복문의 종류
- 1. for
- 2. while
- 3. do ~ while
*/
#pragma endregion

void main() {
	int numberA = 0;
	numberA = 1;
	numberA++;
	numberA = 6;
	numberA++;
	numberA += 5;
	numberA--;
	numberA -= 2;
	numberA *= 3;
	numberA /= 2;

	cout << "number의 값: " << numberA << endl;

	/*
	- C / C++ 언어는 연산자를 이용해서 결과를 만들어낼 때 해당 연산자에 사용된 변수의 자료형에 따라서 결과가 달라진다.

	EX)
	정수 + 정수 = 정수
	정수 + 실수 = 실수
	- 기본적으로 연산자를 사용할 때는 동일한 자료형의 변수 (데이터)를 가지고 연산을 하는 것이 원칙이지만 만약, 서로 다른 자료형이 있을 경우 데이터의 결과는 값을 소실 할 수 있는 위험이 적은 자료형으로 만들어진다.
	
	단, 나머지 연산자는 정수형 데이터에만 사용하는 것이 가능.
	*/

	/*
	1. for문
	- 구성
	ㄴ 초기식 : 반복을 위한 변수의 선언 및 초기화
	ㄴ 조건식 : 반복의 조건을 검사하는 목적으로 선언
	ㄴ 증감식 : 반복의 조건을 거짓으로 만드는 증가 및 감소 연산

	for(초기식; 조건식; 증감식) {
		반복이 되는 문장
	}

	- 초기값은 맨 처음에 한번만 수행되고 조건식이 참인 동안만 명령문을 반복 수행한다.

	★ 반복의 횟수가 정해져 있다면 for문이 최선
	*/

	// C 스타일 -> 컴파일러 버전때문
	// ㄴ 변수를 선언하고 for문에서 초기화하는건 다른 언어와의 호환성때문
	int i;
	for (i = 0; i < 10; i++) {
		cout << "[" << i << "번째]" << "끈기와 겸손, 그리고 예의범절" << endl;
	}

	cout << "\n";

	int numberB = 0;
	for (; numberB < 5; numberB++) {
		cout << "이렇게 사용을 한다면...?" << numberB << endl;
	}

	/*
	- for문은 필요에 따라서 초기식, 조건식, 증감식 생략이 가능

	- 생략에 따른 for문의 유형

	1. 초기화 생략
	ㄴ for(; i < 10; i++)

	2. 조건식 생략
	ㄴ for(i = 1; ; i++)

	3, 초기화 증감식 생략
	ㄴfor(; i < 10; )
	4. 모두 생략
	for(; ; )
	*/

	printf("\n");

	int j = 1;
	for (int i = 0; i < 5; i++) {
		cout << "전위 증가 : " << ++j << endl;
		cout << "후위 증가 : " << j++ << endl;
	}

	// 면접문제
	// 머가 제일 빠르냐?
	printf("\n");		// 함수이기 때문에 메모리 할당이 된다. 문자열이라 메모리 할당 더 많이 한다.
	cout << '\n';		// 답
	cout << endl;		// white space 출력 버퍼를 확인하기 때문에 제일 느리다.

	/*
	- 반복문은 내부에 어떤 로직이 있다 하더라도 기본적으로 반복해서 실행하는 것이 가능하기 때문에 반복문 안에 반복문을 넣는 것 또한 가능하다. 해당 형식의 코드를 "중첩 반복문"이라고 한다.
	*/

	cout << "for문 구구단" << endl;

	for (int i = 1; i < 10; i++) {
		for (int j = 2 ; j < 10 ; j++) {
			cout << j << " X " << i << " = " << i * j << "\t";
		}
	}

	/*
	02. while문

	- 무한(loop): 반복 조건에 1(참)이 들어갈 경우 무한 루프에 빠지게 된다.
	ㄴ 후에 배울 break문으로 빠져 나오거나 논리를 완성시켜 탈출하는 방법이 있다.
	ㄴ 조건이 참(true)일때만 작동

	- white문은 특정 조건을 주고 그 조건을 만족하는 동안 특정 영역을 계속해서 반복하는 구조

	★ while문은 반복의 조건을 거짓으로 만드는게 굉장히 중요하다.
	*/

	int playerHP = 1000;

	while (playerHP > 0) {
		int hit = 100;
		playerHP -= hit;
		cout << "체력 = " << playerHP << endl;
	}

	cout << '\n';

	int numC = 0;

	while (numC < 5) {
		cout << "while문의 속성" << endl;
		numC++;
	}
	cout << "\n";

	cout << "while문 구구단" << endl;
	int num1 = 2;
	int num2 = 1;
	while (num1 < 10) {
		while (num2 < 10) {
			cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
			num2++;
		}
		num2 = 1;
		num1++;
	}
	num1 = 2;
	num2 = 1;
	int k = 0;
	while (num1 < 10) {
		while (num2 < 10) {
			cout << num1 << " X " << num2 << " = " << num1 * num2 << "\t"
				<< (num1 + 1) << " X " << num2 << " = " << (num1 + 1) * num2 << "\t";
			cout << (num1 + 2) << " X " << num2 << " = " << (num1 + 2) * num2 << "\n";
			num2++;
		}
		num2 = 1;
		num1 += 3;
	}

	/*
		3. do ~ while문

		- while문과의 차이점?
		ㄴ 조건을 검사하는 시점이 다르다.
		ㄴ 일단 무조건 한번 실행 후 while문의 조건을 검사하여 do ~ while문 안의 문장을 실행할것인지에 대해서 판단한다.

		do {

		} while (조건식);
	*/

	int numD = 0;
	do {
		cout << "1번 do ~ while문" << endl;
		numD++;
	} while (numD < -1);

	cout << "\n";

	do {
		cout << "2번 do ~ while문" << endl;
		numD++;
	} while (numD < 3);

	cout << "\n";

	int total = 0, num = 0;
	do {
		cout << "숫자를 입력하세요. (0을 입력하면 종료된다.)" << endl;
		cin >> num;
		total += num;
	} while (num != 0);

	cout << "입력한 숫자의 합계 : " << total << " 입니다." << endl;
	cout << "\n";

	/*
	▶ while문과 do ~ while문

	- 반복의 횟수가 정해져 있다면 while문 <-> do ~ while문이 자연스럽게 바뀌지만 반복의 횟수가 정해져 있지 않다면 고민이 필요하다.
	ㄴ 위에 do ~ while문을 while문으로 바꾸면 바로 종료된다.
	ㄴ num -> 0

	- 강제로 while문에 진입을 위해서는 num을 0이 아닌 값으로 초기화 해야 하는데 이러면 내가 소스를 컨트롤하는 느낌이 아니라 컴퓨터에 맞춰서 코딩 방식을 바꾸는 방식이라고 할 수 있다.
	ㄴ 이런 습관이 몸에 베이면 망한다.
	*/

	cout << "do ~ while문 구구단" << endl;

	int num5 = 2;
	int num6 = 1;
	do {
		do {
			cout << num5 << " X " << num6 << " = " << num5 * num6 << endl;
			num6++;
		} while (num6 < 10);
		num6 = 1;
		num5++;
	} while (num5 < 10);
}

/*
과제1. 연산자 활용

- 두 개의 정수를 받아서 두 수의 덧셈과 뺄셈의 결과를 출력하는 프로그램 작성

- 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성

EX) (num1 + num2) * (num3 + num1) % num1 = ?

- 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

EX) 7과 2가 입력되면 몫으로 3, 나머지 1이 출력되면 Ok

과제2. 반복문 출력

- for / while / do ~ while 3가지 버전으로
ㄴ 20에서 1까지 출력
ㄴ 1부터 20까지 출력 -> 단, 짝수만
ㄴ 배운것 이외에는 사용금지

과제3. 반복문 숙달

- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 만든다.

- 종료조건 : - 15를 넘어가면 탈출

- 조건 : 입력 받은 값은 -10 ~ 10사이의 숫자여야 하고 이외의 값 입력시 그냥 종료시킨다.

EX) cin >> num (-10 ~ 10)

※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 while문이 돌아가게 만든다.

과제4. 마름모 찍기

도전 과제5.

- 반복문 1번 -> 1줄 - > 마름모 찍기

한줄 조사. 조건문
ㄴ 노트에 적어온다.
ㄴ비유할것 생각해 온다. (EX : 조건문은 OOO다.)

※ 한줄 조사

- static_cast
- dynamic_cast
- const_cast
- reinterpret_cast
*/