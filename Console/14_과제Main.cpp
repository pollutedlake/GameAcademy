#include "14_����1.h"
#include "14_����2.h"

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