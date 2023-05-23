#pragma once
class Num
{
public:
	Num();
	virtual ~Num();

	virtual void setN(int n) {}
	virtual int getN() { return 0; }
};

