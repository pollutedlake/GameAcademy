#include"08_����1.h"
#include"08_����2.h"
#include"08_����3.h"
#include"08_����4.h"

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