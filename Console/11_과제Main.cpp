#include "11_과제1.h"
#include "11_과제2.h"
#include "11_과제3.h"

#define ASSIGNMENT1		1
#define ASSIGNMENT2		2
#define ASSIGNMENT3		3

#define ASSIGNMENT		ASSIGNMENT1

void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	AutoBattleGame* autoBattleGame = new AutoBattleGame;
	autoBattleGame->playGame();
	delete autoBattleGame;

#elif ASSIGNMENT == ASSIGNMENT2



#elif ASSIGNMENT == ASSIGNMENT3



#endif // ASSIGNMENT == ASSIGNMENT1


}