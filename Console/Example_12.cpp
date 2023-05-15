#include "Example_12.h"

// 선택적 컴파일
#define EXAMPLE_TYPE_PRINT					1
// 삼항
#define EXAMPLE_TYPE_TERNARY_OPERATOR		2
// 문자열
#define EXAMPLE_TYPE_STRING					3

#define EXAMPLE_TYPE		EXAMPLE_TYPE_STRING

namespace EXAMPLE_2
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		//! Do Nothig

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

		cout << "삼항 연산자" << endl;
		int numA, numB;
		cout << "정수 입력: ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		cout << "입력한 수의 값 : " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;
		cout << "정수 입력 : ";
		cin >> numberA;

		result = numberA < 10 ? numberA : numberB;

		cout << "삼항 연산자 결과값 : " << result << endl;
#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : 바이트" << endl;
		cout << sizeof(numA) << " : 바이트" << endl;
		cout << sizeof(numB) << " : 바이트" << endl;
		cout << sizeof(numC) << " : 바이트" << endl;

		/*
		▶ 주의를 기울여야 할 문자열

		- C/C++은 타입에 엄격한 언어
		ㄴ 기본적으로 NULL 지원

		★ 면접 문제
		- 문자와 문자열의 차이점에 대해
		ㄴ 문자는 NULL 문자 추가 안된다.
		ㄴ 문자열은 NULL 문자가 추가된다.
		- 문자열의 끝을 표시하기 위해서 NULL을 추가한다.

		▷ NULL
		- iostream에 정의되어 있다.

		- NULL은 0 주소를 의미하며 그렇기에 차후 배울 포인터 변수를 초기화 할때도 사용할 수 있다.

		EX)

		char* p = NULL		==		char*p = 0;
		int n = NULL		!=		int n = 0;

		- 전자는 p라는 변수의 주소값에 0을 넣는 것이고 후자는 0을 n에 넣겠다라는 의미이다.
		*/

		printf("\n");

		// 문자
		char strA = 'A';
		cout << "strA = " << strA << endl;

		// 문자열
		char strB[4] = "abc";
		cout << "strB = " << strB << endl;

		/*
		- C/C++ 언어의 문자열 표현 방법
		ㄴ C/C++ 언어는 "" 조합을 통해서 문자열을 표현하는 것이 가능하며 이때 char의 배열을 이용한다.
		ㄴ 또한, 문자열 상수를 통해 초기화를 진행할 경우 널 문자를 명시적으로 기입하지 않아도 된다.


		char arr1[] = {'h', 'i', '~'};
		ㄴ 문자만 저장된 배열 -> 문자열이라고 할 수 없다.

		char arr2[] = {'h', 'i', '~', '\0'};
		ㄴ 문자열 배열


		- 문자 배열과 문자열의 차이점은 \NULL(\0)의 포함 여부

		- 문자열 저장을 목적으로 char형 배열을 선언할 경우 \NULL은 문자열 마지막에 자동으로 삽입된다.

		- NULL 문자의 아스키 코드 값은 0이다.
		ㄴ 그리고 이를 문자의 형태로 출력할 경우 아무런 출력이 발생하지 않는다.
		
		★ C/C++ 언어에서는 문자열이 되기 위해서 반드시 널 문자를 포함해야 한다.
		ㄴ 이유?: 끝을 나타내기 위해

		*/

		char strC[20] = "i like game.!";

		cout << strC << endl;

		strC[10] = '\0';

		cout << strC << endl;

		strC[2] = '\0';

		cout << strC << endl;
#endif


	}
}