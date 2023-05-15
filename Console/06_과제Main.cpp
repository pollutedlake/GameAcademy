#include "06_苞力1.h"
#include "06_苞力2.h"
#include "06_苞力3.h"
#include "06_苞力4.h"
#include "06_苞力5.h"
#include "06_苞力6.h"

#define ASSIGMENT1		1
#define ASSIGMENT2		2
#define ASSIGMENT3		3
#define ASSIGMENT4		4
#define ASSIGMENT5		5
#define ASSIGMENT6		6

#define ASSIGNMENT		ASSIGMENT6

void main()
{
#if ASSIGNMENT == ASSIGMENT1
	AVERAGE::averageInputValue();
	AVERAGE::averageNotInputValue();

#elif ASSIGNMENT == ASSIGMENT2
	WOLNAMPPONG::wolnamppongPlay();

#elif ASSIGNMENT == ASSIGMENT3
	ASSIGNMENT_3::randomDevice();

#elif ASSIGNMENT == ASSIGMENT4
	ASSIGNMENT_4::sum();

#elif ASSIGNMENT == ASSIGMENT5
	ASSIGNMENT_5::findMatch();

#elif ASSIGNMENT == ASSIGMENT6
	ASSIGNMENT_6::highlowseven();

#endif	
}