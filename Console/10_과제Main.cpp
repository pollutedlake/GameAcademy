#include "10_과제1.h"
#include "10_과제2.h"
#include "10_과제3.h"
#include "10_과제4.h"
#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT3		3
#define ASSIGNMENT4		4

#define ASSIGNMENT		ASSIGNMENT1


void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	for (int i = 0; i < 5; i++)
	{
		Assignment1* assignment = new Assignment1(i);
		delete assignment;
	}

#elif ASSIGNMENT == ASSIGNMENT2

	Family* family = new Family();
	if (family != NULL)
	{
		family->printFamily();
	}
	delete family;

#elif ASSIGNMENT == ASSIGNMENT3

	Assignment3* assignment = new Assignment3;
	assignment->gamePlay();

#elif ASSIGNMENT == ASSIGNMENT4

	Assignment4* assignment = new Assignment4;
	delete assignment;

#endif // ASSIGNMENT == ASSIGNMENT1

}