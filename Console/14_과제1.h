#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct STData
{
	int m_nValue;
	string m_oString;
};

class Vector
{
private:
	vector<int> intVector;
	vector<int>::iterator intVIterator;
	vector<STData> structVector;
	vector<STData>::iterator structVIterator;
public:
	Vector();
	~Vector();

	vector<int> getIntVector() { return intVector; }
	vector<STData> getStructVector() { return structVector; }

	void sampleVector(vector<int> valueList);
	void sampleSTVector(vector<STData> ValueList);
	void practiceVector(void);
};