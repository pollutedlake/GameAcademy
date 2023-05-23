#pragma once
#include "Classes8.h"
#include "Virtualization.h"
#include<iostream>
using namespace std;

class NumBaseBall
{
private:
	Classes8* classes8;
	Virtualization* virtualization;
public:
	NumBaseBall();
	~NumBaseBall();

	void gameStart();
};