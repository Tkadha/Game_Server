#pragma once
#include "stdafx.h"
#include "Player.h"
class Game
{
public:
	Game();
	~Game();
	void Init();
	void Update();
	void Render();
	void Destroy();
private:
	Player* player = new Player;
};



