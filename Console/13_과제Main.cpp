#include "13_°úÁ¦1.h"
#define ASSIGNMENT1		1
#define ASSIGNMENT		ASSIGNMENT1

void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	NumBaseBall* numBaseBall = new NumBaseBall;
	numBaseBall->gameStart();
	delete numBaseBall;

#endif // ASSIGNMENT == ASSIGNMENT1

}