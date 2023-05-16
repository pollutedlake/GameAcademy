#include"08_苞力1.h"
#include"08_苞力2.h"
#include"08_苞力3.h"
#include"08_苞力4.h"

#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT3		3
#define ASSIGNMENT4		4
#define ASSINGMENT		ASSIGNMENT4

void main()
{
#if ASSINGMENT == ASSIGNMENT1

	ASSIGNMENT_1::lotto();

#elif ASSINGMENT == ASSIGNMENT2

	ASSIGNMENT_2::dataBase();

#elif ASSINGMENT == ASSIGNMENT3

	ASSIGNMENT_3::binggo();

#elif ASSINGMENT == ASSIGNMENT4

	ASSIGNMENT_4::playBinggo();

#endif // ASSIGMENT == ASSIGNMENT1

}