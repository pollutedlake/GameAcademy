#pragma once

class FG_UI
{
private:

	char* startScene = "Press \"S\" to start!";
	char* endScenePlayerWin = "YOU WIN!";
	char* endSceneEnemyWin = "YOU LOSE";
	char* endScene = "Press \"R\" to restart";
public:
	FG_UI();
	~FG_UI();
	char* returnStartScene();
	char* returnEndScenePlayerWin();
	char* returnEndSceneEnemyWin();
	char* returnEndScene();
};

