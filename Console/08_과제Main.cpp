#include"08_苞力1.h"
#include"08_苞力2.h"
#include"08_苞力3.h"
#include"08_苞力4.h"
#include"08_苞力5.h"
#include"08_苞力6.h"
#include"08_苞力7.h"

#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT3		3
#define ASSIGNMENT4		4
#define ASSIGNMENT5		5
#define ASSIGNMENT6		6
#define ASSIGNMENT7		7

#define ASSINGMENT		ASSIGNMENT5

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
	char input[1000];
	cin >> input;
	char output[1000];
	int outputArrsySize = 0;
	ASSIGNMENT_5::ReverseWorld(output, outputArrsySize, input);

#elif ASSINGMENT == ASSIGNMENT6

	ASSIGNMENT_6::numSlide();

#elif ASSINGMENT == ASSIGNMENT7
	
	ASSIGNMENT_7::numSlide();

#endif // ASSIGMENT == ASSIGNMENT1

}