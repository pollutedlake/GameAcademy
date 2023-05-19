#pragma once
#include<iostream>
#include "FamilyMember.h"
using namespace std;

class Family
{
private:
	int familyN;
	FamilyMember* fM;

public:
	Family();
	~Family();
	void printFamily();
};

