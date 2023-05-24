#include "14_과제1.h"
#include "14_과제2.h"

#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT		ASSIGNMENT2

void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	Vector* assignment = new Vector;
	assignment->practiceVector();
	delete assignment;

#elif ASSIGNMENT == ASSIGNMENT2

	Shop* shop = new Shop;
	shop->startShopping();
	delete shop;


#endif // ASSIGNMENT == ASSIGNMENT1

}