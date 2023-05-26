#include "13_°úÁ¦1.h"
#include "DoubleBuffering.h"
#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT		ASSIGNMENT2

void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	NumBaseBall* numBaseBall = new NumBaseBall;
	numBaseBall->gameStart();
	delete numBaseBall;

#elif ASSIGNMENT == ASSIGNMENT2

	DoubleBuffering doubleBuffering;
	doubleBuffering.screenInit();
	while (true)
	{
		doubleBuffering.screenClear();
		doubleBuffering.screenPrint();
		doubleBuffering.screenFlipping();
	}

#endif // ASSIGNMENT == ASSIGNMENT1

}