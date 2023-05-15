#pragma once
/*
과제1. 주민번호 생성기

- 시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
ㄴ EX : 1975 / 75

- 월과 일을 처리 (2자리, 1자리 처리)
ㄴ EX : 06 / 6

- 예외 처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.

- 성별 선택(남자는 1또는 3/ 여자는 2또는 4)
ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정

- 마지막 6자리는 랜덤으로 출력
ㄴ예외처리 : 단, 0이 나오면 안된다.
string 사용 금지
*/
#include<iostream>
#include<random>;
using namespace std;

namespace ASSIGNMENT_1
{
	void createResidentN();
}