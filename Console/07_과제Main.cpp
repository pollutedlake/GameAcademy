#include "07_과제1.h"
#include "07_과제2.h"

#define ASSIGMENT1		1
#define ASSIGMENT2		2
#define ASSIGMENT		ASSIGMENT1

void main()
{
#if ASSIGMENT == ASSIGMENT1
	ASSIGNMENT_1::createResidentN();

#elif ASSIGMENT == ASSIGMENT2
	ASSIGNMENT_2::backwardsString();
	ASSIGNMENT_2::evenBackwardsString();
	ASSIGNMENT_2::noHyphen();
#endif // ASSIGMENT == ASSIGMENT1
}