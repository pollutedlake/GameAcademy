#include "RPS_Me.h"


RPS_Me::RPS_Me()
{

}

RPS_Me::~RPS_Me()
{

}

void RPS_Me::setRPS()
{
	cout << "가위바위보 중 하나를 입력하세요(0 : 가위, 1 : 바위, 2 : 보) : ";
	cin >> this->RPS;
}

int RPS_Me::returnRPS()
{
	return this->RPS;
}