#include "FG_UI.h"

FG_UI::FG_UI()
{

}

FG_UI::~FG_UI()
{

}

char* FG_UI::returnStartScene()
{
	return startScene;
}

char* FG_UI::returnEndScenePlayerWin()
{
	return endScenePlayerWin;
}

char* FG_UI::returnEndSceneEnemyWin()
{
	return endSceneEnemyWin;
}

char* FG_UI::returnEndScene()
{
	return endScene;
}