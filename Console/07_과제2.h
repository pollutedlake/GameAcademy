#pragma once
/*
string 사용 금지
과제2. 문자열 과제 (손코딩)

- 문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
ㄴ EX) ABCD -> DCBA

- 있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력한다.
ㄴ EX) ASDFG -> AFDSG

- 주민번호를 입력하고 -이 제거된 주민번호로 출력한다.
ㄴ EX) 1234567-12345678 -> 123456712345678

한줄 조사. 사용자 정의 자료형

- 노트에 적어온다.

- 비유할 것 생각해 온다.
*/
#include<iostream>
using namespace std;

namespace ASSIGNMENT_2
{
	void backwardsString();

	void evenBackwardsString();

	void noHyphen();
}