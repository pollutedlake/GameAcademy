#pragma once
#include "Num.h"
class Answer : public Num
{
private:
	int _n[3] = { 0, 0, 0 };
public:
	Answer();
	~Answer();

	void setN(int n);
	int getN();
};

