#include "11_����1.h"

#define ASSIGNMENT1		1

#define ASSIGNMENT		ASSIGNMENT1

void main()
{
#if ASSIGNMENT == ASSIGNMENT1

	AutoBattleGame* autoBattleGame = new AutoBattleGame;
	autoBattleGame->playGame();
	delete autoBattleGame;

#endif // ASSIGNMENT == ASSIGNMENT1


}