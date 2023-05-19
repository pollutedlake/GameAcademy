#pragma once
#include<iostream>
using namespace std;

class FamilyMember
{
private:
	char name[20];
	int age;
	int birthdate;
	char sex[20];
	char relationWithMe[20];

public:
	FamilyMember();
	~FamilyMember();
	void printFamilyMember();
};

