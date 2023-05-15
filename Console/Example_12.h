#pragma once
#include <iostream>

using namespace std;

#pragma region 삼항 연산자 + 문자열
/*
▶ 삼항 연산자

- 경우에 따라 if ~ else문을 일부 대체할 수 있다.
ㄴ 적당한 로직에 활용을 한다면 코드 간결화를 얻을 수 있다.

EX)
(조건식) ? true : false;
(numA > numB) ? dataA : dataB

- 조건식이 참이면 dataA 반환 / 거짓이면 dataB가 반환된다.

▶ 문자열

- 문자열이란 문자의 조합을 의미하며 문자열을 활용할 경우 문자가 조합된 단어 또는 문장을 표현하는 것이 가능하다.

- 문자열을 활용하면 화면 상에 문자로 된 정보를 출력하는 작업이 수월하다.

▷ 메모리 단위

- char는 1byte
- 1byte는 8bit
ㄴ 1bit : 0과 1을 표현 할 수 있는 가장 작은 단위

- 문자를 표현함에 있어 메모리 효율 문제로 int보다 char형이 어울린다.
- int형으로 했을 경우 연산이 빠르다. -> 굳이 연산할 일이 없는 문자 표현에 메모리 낭비를 할 이유가 전혀 없다.

※ BIT -> BYTE -> KB -> MB -> GB -> TB -> PB -> EB -> ZB
*/
#pragma endregion

namespace EXAMPLE_2
{
	void Example();
}