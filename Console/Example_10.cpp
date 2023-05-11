#include "Example_10.h"

// 코드를 관리하기 위한 전처리문 (선택적 컴파일)
#define EXAMPLE_TYPE_PRINT				1

// 배열 타입(1차원, 2차원 등등...)
#define ARRAY_TYPE_SIMPLE				1
#define ARRAY_TYPE_MULTI_DIMENSION		2

// 제어를 위해
#define EXAMPLE_TYPE					EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE						ARRAY_TYPE_MULTI_DIMENSION


namespace EXAMPLE_1
{
#define ARRAY_SIZE		5

	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		cout << "효율적인 프로젝트 관리" << endl;

		cout << '\n';

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;

		cout << '\n';

		// 1차원
		int num[6];
		// int : 배열을 이루는 요소 자료형, num : 배열의 이름, [6] : 길이
		
		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << '\n';

		// 배열 또한 선언과 동시에 초기화 가능
		int anNums[6] = { 0, 1, 2, 3, 4, 5 };
		
		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
			cout << "배열의 값 : " << anNums[i] << endl;
		}

		cout << '\n';

#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE

		/*
		- sizeof 연산자는 지정된 자료형 또는 변/상수의 바이트 크기를 계산하는 역할을 한다.

		- 또한 sizeof 연산자를 배열에 활용할 경우 배열 전체의 바이트 크기를 계산 하는 것이 가능하다.

		EX)
		int anValues[5];

		sizeof(anValues);		<- 배열의 전체 크기 (배열 크기 * 배열 요소 크기 = 20)
		sizeof(anValues[0]);	<- 배열의 요소 크기 (int형에 해당하는 크기 = 4)

		▷ C / C++ 언어 배열의 초기화 방법

		int anValuesA[10] = { 0 };
		int anValuesB[] = {1, 2, 3, 4, 5};

		- 배열의 크기는 명시적으로 배열을 선언할 때 정해주는 것이 가능하지만 배열의 초기화를 이용하면 배열의 크기를 직접 명시하지 않더라도 컴파일러에 의해서 초기화에 들어간 값의 갯수만큼 배열의 크기가 정해진다.
		*/

		// 예외처리가 시작되는 부분

		int anValuesA[ARRAY_SIZE] =
		{
			1, 2, 3, 4, 5
		};

		int anValuesB[] =
		{
			1, 2, 3, 4, 5
		};

		// 이 작은 노력이 큰 결과를 만들어 낸다.
		const int SizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int SizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		// 1. 피곤하다 -> 효율 떨어진다.
		// 2. 가독성이 좋지 않다.
		// 3. 범위에 대한 대비책이 없다.
		cout << "== 배열 요소 출력 ==" << endl;
		printf("%d, %d, %d, %d, %d\n", anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);

		cout << '\n';

		for (int i = 0; i < SizeA; i++)
		{
			// 삼항 연산자
			printf("%d%c ", anValuesA[i], (i <= SizeA - 2) ? ',' : ' ');
		}

		cout << '\n';

		for (int i = 0; i < SizeB; i++)
		{
			printf("%d%c ", anValuesB[i], (i <= SizeB - 2) ? ',' : ' ');
		}

#else
		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5];

		/*
		sizeof(anMatrix);				-> 5 * (배열 요소 크기 : 5 * 4) => 100
		sizeof(anDimensionMatrix);		-> 5 * (5 * (배열 요소 크기 : 5 * 4)) => 500
		*/

		int anDemensionMatrix[ARRAY_TYPE][ARRAY_SIZE][ARRAY_SIZE] = { 0 };
		const int nPage = sizeof(anDimensionMatrix) / sizeof(anDimensionMatrix[0]);

		for (int i = 0; i < nPage; ++i)
		{
			for (int j = 0; j < nRow; ++j)
			{
				for (int k = 0; k < nCol; ++k)
				{

				}
			}
		}

#endif		// ARRAY_TYPE == ARRAY_TYPE_SIMPLE

#else

#endif		// EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
	}
}