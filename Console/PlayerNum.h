#pragma once
#include"Num.h"

class PlayerNum : public Num
{
private:
	int _n[3] = { 0,0,0 };
public:
	PlayerNum();
	~PlayerNum();

	void setN(int n);
	int getN();
};

