#include<iostream>
// C언어 헤더파일
#include<time.h>

#pragma region 자료형 + 변수 선언
/*
▶ 자료형

- 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

ㆍ 변수란?

- 변할 수 있는 숫자나 데이터를 의미
- 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
- 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산을 처리하는 것이 가능하다.

▷ C / C++ 언어에서 지원하는 자료형 종류

- 정수형
ㄴ 소수점 없는 수를 표현하기 위한 자료형

- 실수형
ㄴ 소수점 있는 수를 표현하기 위한 자료형

- 문자형
ㄴ 문자를 표현하기 위한 자료형

-논리형
ㄴ 참 / 거짓을 판별하는 자료형

ㆍ C / C++ 언어 정수형 자료형의 종류

- short (2바이트)
- int (4바이트)
- long (4~8바이트)
- long long (8바이트)

ㆍ C / C++ 언어 실수형 자료형의 종류

- float (4바이트)
- double (8바이트)

ㆍ C / C++ 언어 문자형 자료형의 종류

- char (1바이트)

ㆍ C / C++ 언어 논리형 자료형의 종류

- bool (1 바이트 -> 참(1) 또는 거짓(0)를 나타내는 자료형)

- C 언어는 참 또는 거짓이라는 자료형이 별도로 존재하지 않았다.(C언어에도 bool 자료형 있다. C99)

- 일반적으로 정수 0은 거짓, 0을 제외하는 정수는 참으로 인지를 시켰다.

- 하지만  C++ 언어는 참 또는 거짓을 나타내는 키워드 true / false를 통해서 참 또는 거짓을 표현하는 것이 가능

- C/C++ 자료형은 기본적으로 음수를 표현하는 것이 가능하지만 경우에 따라서 음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.
ㄴ 키워드 : singed/ unsigned

EX)
1, 10, 100, 2453 -> 정수형 -> int
123.4567 / 3.141592 -> 실수형 ->float
참 / 거짓 -> 논리형 -> bool
ㄴ true : 참을 의미하는 1바이트 데이터
ㄴ false : 거짓을 의미하는 1바이트 데이터

※ bool 자료형은 정수가 와야 할 위치에 오게 되면 각각 1과 0으로 반환이 될 뿐 각각 정수 0과 1이 아니다.

▷ C / C++ 자료형의 크기

자료형 타입		크기			범위
int				4byte		약 -21억~21억까지의 수를 담는다.
unsigned int	4byte		약 0 ~ 43억까지의 수를 담는다.
short			2byte		-32767 ~ 32768(7) -> 언어 버전마다 다름

float			4byte		소수점 6자리까지 (사용하는 OS에 따라 변동 가능 +1)
double			8byte		소수점 15자리까지 (사용하는 OS에 따라 변동 가능 +1)

char			1byte		정수를 담는다.(문자)
unsigned char	1byte		양의 정수를 담는다.(문자)

bool			1byte		0(거짓) / 1(참)

▷ 변수 선언?

- 변수 선언이란?
ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

기본형식: 변수 형태(종류) 변수명

EX)
- int Num;
- int Num = 10;

- 변수의 선언으로 인해서 Num이라는 이름으로 메모리 공간이 할당
- int Num = 10; 이 녀석은 단순히 Num에 10을 저장하는게 아니라 Num이 의미하는 메모리 공간에 10을 넣어라 라는 의미라고 할 수 있다.
*/
#pragma endregion

// 장점 : 속도 빠르다.
// 단점 : 메모리 사용량이 늘어난다.

// using  지시자 : 지정한 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와 소속 지정없이 명칭을 바로 사용할 수 있다.

// std : C++ 표준에서 정의하고 있는 많은 것들이 std안에 속해 있다.
using namespace std;

using std::cin;
using std::cout;
using std::endl;

namespace A {
	namespace B {
		namespace C {
			int Player;
			// int Num;
		}
	}
}

namespace ABC = A::B::C;

void main() {
	A::B::C::Player;
	ABC::Player;

	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	cout << "boolean: " << TestResult << endl;

	cout << endl;

	// 변수 초기화 방법
	// ㄴ 다양한 방법이 존재하지만 일반적으로는 2가지를 사용한다.

	// int형 변수 선언
	int Num0;
	// 선언 이후 값 변경 (할당)
	Num0 = 10;

	// 변수는 선언과 동시에 초기화도 가능
	int Num1 = 3;
	int Num2 = 6;
	int Total;

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = 100;

	// 또한 C/C++ 언어에서는 sizeof 키워드를 이용하면 변수 + 자료형의 크기를 계산하는 것이 가능하다.
	cout << "정수 1 사이즈: " << sizeof(1) << endl;
	cout << "정수 2 사이즈: " << sizeof(2) << endl;
	cout << "true 사이즈: " << sizeof(true) << endl;
	cout << "false 사이즈: " << sizeof(false) << endl;

	cout << endl;

	// 이제 자료형을 알았으니 다양한 것을 더 해볼 수 있다.
	int nValue = 0;

	// C++
	cout << "숫자를 입력하세요: " << endl;
	cin >> nValue;

	cout << "내가 입력한 숫자: " << nValue << endl;

	cout << endl;

	// C
	printf("정수 입력: ");
	scanf_s("%d", &nValue);

	cout << endl;

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float fValueA = 3.14f;
	double dbValueB = 3.14;

	// C
	printf("C언어 short : %d, %d\n", ValueA, sizeof(ValueA));
	printf("C언어 int : %d, %d\n", ValueB, sizeof(ValueB));
	printf("C언어 long : %d, %d\n", ValueC, sizeof(ValueC));
	printf("C언어 long long : %d, %d\n", ValueD, sizeof(ValueD));
	printf("C언어 float : %f, %d\n", fValueA, sizeof(fValueA));
	printf("C언어 double : %f, %d\n", dbValueB, sizeof(dbValueB));

	cout << endl;

	// C++

	cout << "C++ short : " << ValueA << ", " << sizeof(ValueA) <<  endl;
	cout << "C++ int : " << ValueB << ", " << sizeof(ValueB) <<  endl;
	cout << "C++ long : " << ValueC << ", " << sizeof(ValueC) <<  endl;
	cout << "C++ long long : " << ValueD << ", " << sizeof(ValueD) <<  endl;
	cout << "C++ float : " << fValueA << ", " << sizeof(fValueA) <<  endl;
	cout << "C++ double : " << dbValueB << ", " << sizeof(dbValueB) <<  endl;

	cout << endl;

	/*
	▶ 변수 표기법

	1. 헝가리안

	- 예전 절차지향적인 방식으로 코딩할 때 이 변수가 어떤 변수인지 알기 위해 서로 약속하듯이 그 변수형태가 뜻하는 약자를 변수앞에 붙였다.

	EX) int num <=> nNum;
	float ValueA <=> fValueA;

	- 현재 네이티브 방식에서는 거의 사용을 하지 않는다.
	ㄴ 탄생 배경이 객체지향과는 맞지 않기 때문에(절차지향)
	ㄴ 하지만 엔진에서는 다시 사용이 되고 있는 추세

	2. 카멜식

	- 객체지향적인 방식의 코딩으로 전환이 되면서 가독성을 위해 한 단어의 앞글자만 표기하는 방법

	EX) int playerselectnumber
	EX) int playerSelectNumber

	3. 파스칼 케이스

	- 앞글자를 대문자로

	int PlayerSelectNumber

	4. 스네이크

	- 단어를 밑줄로 끊어서 표기하는 방법
	ㄴ C/C++에서 좋아하는 방식

	int player_select_number
	int Player_Select_Number
	*/

	// ▶ 랜덤 시드

	// 랜덤 시드 초기화
	srand(time(NULL));

	int numR;

	// % : 나머지 연산자
	// ㄴ 나눈뒤 나머지를 구해준다.
	// ㄴ 몫 -> 나누기 통해서

	numR = rand() % 5;	// 0, 1, 2, 3, 4

	//RAND_MAX

	// () / {} / []
	// ? 
	// 쓰레기값 출력
	cout << numR << endl;

	int weaponA = 0;
	// ?

	weaponA = rand() % 6 + 20;

	// 20 ~ 25
	cout << "무기 데미지의 값 : " << weaponA << endl;
}

/*
과제1. 아이템 만들기

- 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세서리까지..
ㄴ 5종씩 만들고 화면에 출력

- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함꼐 나열된다.

- 필수 : 무기 1종 + 방어구 1종 + 악세서리 1종
ㄴ 컬러 도트
ㄴ 차후 너희 포폴에 들어갈 컨셉으로 추가한다.

과제2. 랜덤 숫자 담기

- 1 ~ 5까지의 랜덤숫자 -> 인트

- 6 ~ 19까지의 랜덤숫자 -> 인트

- 23 ~ 189까지의 랜덤숫자 -> 인트
ㄴ 단 검증 수식을 만들어와라

한줄 조사. 반복문

- 반복문의 종류와 역활에 대해서 조사
- 노트에 적어온다.
*/