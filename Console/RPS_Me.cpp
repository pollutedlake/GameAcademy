#include "RPS_Me.h"


RPS_Me::RPS_Me()
{

}

RPS_Me::~RPS_Me()
{

}

void RPS_Me::setRPS()
{
	cout << "���������� �� �ϳ��� �Է��ϼ���(0 : ����, 1 : ����, 2 : ��) : ";
	cin >> this->RPS;
}

int RPS_Me::returnRPS()
{
	return this->RPS;
}