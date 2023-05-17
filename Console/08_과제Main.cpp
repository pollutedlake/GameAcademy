#include"08_苞力1.h"
#include"08_苞力2.h"
#include"08_苞力3.h"
#include"08_苞力4.h"
#include"08_苞力5.h"
#include"08_苞力6.h"

#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT3		3
#define ASSIGNMENT4		4
#define ASSIGNMENT5		5
#define ASSIGNMENT6		6
#define ASSIGNMENT7		7

#define ASSINGMENT		ASSIGNMENT6

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

#elif ASSINGMENT == ASSIGNMENT5
	char input[20];
	cin >> input;
	char output[20];
	int outputArrsySize = 0;
	ASSIGNMENT_5::ReverseWorld(output, outputArrsySize, input);

#elif ASSINGMENT == ASSIGNMENT6

	ASSIGNMENT_6::numSlide();

#elif ASSINGMENT == ASSIGNMENT7


#endif // ASSIGMENT == ASSIGNMENT1

}