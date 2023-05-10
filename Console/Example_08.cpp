#include <iostream>
using namespace std;

#pragma region 함수 + 변/상수
/*
▶ 변수와 상수 영역이란?

- 변/상수가 프로그램에 걸쳐서 영향을 미칠 수 있는 범위를 의미한다.
ㄴ 변/상수의 종류에 따라서 해당 변/상수에 접근할 수 있는 범위가 달라진다.

- 바꿔말해, 서로 다른 영역에서만 유효한 동일한 이름을 지니는 변/상수가 존재할 경우 각각 변/상수는 서로 별개라는 의미

- C/C++ 언어는 {}조합을 통해서 특정 영역의 시작과 끝을 나타내는것이 가능하다.

▷ C/C++ 언어의 변/상수 종류

- 로컬 (지역)
ㄴ 특정 영역에서만 접근이 가능한 변/상수
ㄴ EX : 로컬/ 지역/ 멤버

- 글로벌 (전역)
ㄴ 프로그램 전체에서 접근이 가능한 변/상수
ㄴ 잘못 사용하면 메모리 누수가 반드시 발생하기 때문에 주의를 요한다.

- 정적 로컬 (지역)
ㄴ 특정 영역에서만 접근이 가능하다.
ㄴ 단, 지역 변수와 달리 해당 변수의 값이 항상 유지되는 변/상수

- 정적 글로벌 (전역)
ㄴ 전역 변수와 달리 해당 변/상수가 선언 된 파일에서만 접근이 가능한 변/상수

- 면접 사골 문제
ㄴ 지역, 전역, 동적 변수등 변수의 LifeCyle(생명 주기) 설명해봐라.
ㄴ 메모리 순환 질문
ㄴ Allocate -> Release -> Momory Pool
ㄴ 변수의 메모리가 확보된 시점부터 해제가 되기까지 대기하다가 차후 사용이 끝나면 메모리 풀에 반환되는 시점을 의미한다.

- 변수는 자신이 생성된 Scope 내에서 생성되고 소멸이 된다.
- 전역변수의 생명 주기 : 애플리케이션의 생명 주기
- 지역변수의 생명 주기 : 일반적으로 함수의 생명 주기와 동일하다고 가정한다.
*/
#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

// 전역 공간
// ㄴ 전역변수에 선언된 static
// ㄴ 선언된 파일내에서 참조 허용하겠다는 의미

static int g_Value = 0;
const int g_ConstantValue = 0;

void main()
{

	int i = 0;
	for (int i = 0; i < 5; i++) {
		int k = 10;
		i += 1;
		// Do Something
	}
	i += 1;
	
	int Value = 0;

	cin >> Value;

	cout << '\n';

	cout << "== 값을 증가시킨 후 ==" << endl;

	// 10
	IncreaseValue(Value);
	// 10
	IncreaseValue(Value);

	// 20
	cout << "전역 변수의 값 : " << g_Value << endl << endl;

	cout << "== 값을 감소시킨 후 ==" << endl;

	// -10
	DecreaseValue(Value);
	// - 20
	DecreaseValue(Value);

	// 0
	cout << "전역 변수의 값 :" << g_Value << endl << endl;
	// - static 키워드의 영향으로 함수 호출 시 값이 누적된다.

	/*
	C/C++ 언어는 특정 영역안에 새로운 영역을 만드는 기능을 제공한다.
	ㄴ 영역 중첩이 가능하다.

	또한, C/C++ 언어는 영역만 중복되지 않는다면 동일한 이름을 지니는 변/상수를 만드는 것이 가능하기 때문에 특정 영역과 해당 영역의 새로운 지역 영역에서 동일한 이름의 변수를 만들었다고 하더라도 이는 컴파일러 입장에서
	에러로 처리하지 않는다.
	ㄴ 문법적으로 해당 기능을 제공

	단, 지역 영역에서 새로운 변수를 만들었다 하더라도 해당 변수의 이름과 동일한 이름을 지니는 변수가 외부 영역에서 선언되어 있으면 특정 지역을 지정해서 해당 변수의 값을 변경하는 것이 불가능

	why -> 변/상수의 접근 우선 순위는 가장 가까운 영역으로 범위가 제한되기 때문에
	*/

	// 너 버프받고 가라
	{	// <- 새로운 영역 시작
		// 익명 변수, anymous data, 일회성 데이터
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;
	}	// <- 새로운 영역 종료

	cout << "== 새로운 지역이 종료된 후 ==" << endl;
	// 10
	cout << "현재 지역 변수 : " << Value << endl;
	// 0
	cout << "전역 변수 : " << g_ConstantValue << endl;
}

// 값을 증가시킨다.
void IncreaseValue(int Value)
{
	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "IncreaseValue 함수의 지역 변수 : " << LocalValue << endl;
}

// 값을 감소시킨다.
void DecreaseValue(int Value)
{
	// 함수 내에 선언된 static
	// ㄴ 한번만 초기화 되고 지역변수와 달리 함수를 빠져나가도 소멸되지 않는다.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "DecreaseValue 함수의 지역 변수 : " << LocalValue << endl;

	/*
	정적 변/상수는 특정에서만 접근이 가능한 지역 변수의 특성과 프로그램이 종료되때까지 사라지지 않는 전역 변수의 특성을 모두 지니고 있다.

	EX) 지역 변수 <=> 전역 변수

	그렇기 때문에 정적 변/상수를 선언하는 해당 코드는 해당 영역이 실행되는 그 첫 순간에만 유효하다는 것을 알 수 있다.(여기선 초기화가 한번만 이뤄진다.)
	*/
}