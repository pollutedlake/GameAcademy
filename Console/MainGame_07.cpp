#include"MainGame_07.h"

MainGame_07::MainGame_07()
{
	// 이제 일반 함수는 어렵지 않다.
	outPutValue();
	cout << endl;

	// 값 : 50
	outPutValue(50);
	cout << endl;
	
	// 템플릿 프로세스
	outPutFunc("템플릿 프로세스");
	cout << endl;

	// 2.5, 3.99
	outPutFunc(2.5, 3.99);
	cout << endl;

	// 5.55
	cout << maxValue(2.44, 5.55) << endl;
	cout << endl;

	// 60
	cout << addValue(4, 56) << endl;
	cout << endl;

	// 60
	cout << addValue(3.14, 56.86) << endl;
	cout << endl;

	/*
	▶ 템플릿 규칙

	- 템플릿은 기본적으로 링크 오류를 다발로 출력하는 놈이기 때문에 규칙을 반드시 숙지한다.

	1. 같은 자료형만 가능
	cout << riskValue(2.932323, 2.3f) << endl;

	2. 문자/문자열을 사용할때는 연산 주의하자.
	cout << addValue("이것도", "신기하네?") << endl;
	*/

	int nLhs = 10;
	int nRhs = 10;

	Swap<int>(nLhs, nRhs);
	printf("정수 : %d, %d\n", nLhs, nRhs);

	float fLhs = 10.0f;
	float fRhs = 20.0f;

	Swap<float>(fLhs, fRhs);
	printf("실수 : %f, %f\n", fLhs, fRhs);

	std::string oLhs = "유황";
	std::string oRhs = "불지옥";

	Swap<std::string>(oLhs, oRhs);
	printf("문자열 : %s, %s\n", oLhs.c_str(), oRhs.c_str());

	// - 두 수를 빼는 함수 구현
	// ㄴ 1. 템플릿 구현
	// ㄴ 2. 생성자 호출 불가
	// ㄴ 3. 두 수를 입력받아 감소 되는 결과를 보여주는 방식 (런타임)
}

MainGame_07::~MainGame_07()
{
	//! Do Nothing;
}

void MainGame_07::outPutValue()
{
	cout << "이제 일반 함수는 어렵지 않다." << endl;
}

void MainGame_07::outPutValue(int num)
{
	cout << "값 : " << num << endl;
}

// 함수 템플릿의 정의는 함수 구현부보다 먼저 명시가 되야 한다.
// ㄴ 이거 안하면 링크 오류
template<typename T>
inline void MainGame_07::outPutFunc(T num)
{
	cout << "T 함수" << endl;
	cout << num << endl;
}

template<typename T1, typename T2>
inline void MainGame_07::outPutFunc(T1 numL, T2 numR)
{
	cout << "T1/T2 함수" << endl;
	cout << numL << ", " << numR << endl;
}

template<typename T3>
inline T3 MainGame_07::maxValue(T3 numL, T3 numR)
{
	cout << "T3 함수" << endl;

	return (numL > numR) ? numL : numR;
}

template<typename T4>
inline T4 MainGame_07::addValue(T4 numL, T4 numR)
{
	cout << "T4 함수" << endl;

	return numL + numR;
}

template<typename T5>
inline T5 MainGame_07::riskValue(T5 numL, T5 numR)
{
	cout << "T5 함수" << endl;
	return T5();
}