#include "06_����1.h"
#include "06_����2.h"
#include "06_����3.h"
#include "06_����4.h"
#include "06_����5.h"
#include "06_����6.h"

#define ASSIGMENT_1		1;
#define ASSIGMENT_2		2;
#define ASSIGMENT_3		3;
#define ASSIGMENT_4		4;
#define ASSIGMENT_5		5;
#define ASSIGMENT_6		6;

void main()
{
	int assignment = ASSIGMENT_6;
	switch (assignment)
	{
	case 1:
		AVERAGE::averageInputValue();
		AVERAGE::averageNotInputValue();
		break;
	case 2:
		WOLNAMPPONG::wolnamppongPlay();
		break;
	case 3:
		ASSIGNMENT_3::randomDevice();
		break;
	case 4:
		ASSIGNMENT_4::sum();
		break;
	case 5:
		ASSIGNMENT_5::findMatch();
		break;
	case 6:
		ASSIGNMENT_6::highlowseven();
		break;
	}
	
}