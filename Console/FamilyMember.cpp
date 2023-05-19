#include "FamilyMember.h"

FamilyMember::FamilyMember()
{
	cout << "이름을 입력하세요 : ";
	cin >> this->name;
	cout << "나이을 입력하세요 : ";
	cin >> this->age;
	cout << "생년월일을 입력하세요 : ";
	cin >> this->birthdate;
	cout << "성별을 입력하세요 : ";
	cin >> this->sex;
	cout << "나와의 관계을 입력하세요 : ";
	cin >> this->relationWithMe;
	cout << endl;
}

FamilyMember::~FamilyMember()
{

}

void FamilyMember::printFamilyMember()
{
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
	cout << "생년월일 : " << birthdate << endl;
	cout << "성별 : " << sex << endl;
	cout << "나와의 관계 : " << relationWithMe << endl;
	cout << endl;
}