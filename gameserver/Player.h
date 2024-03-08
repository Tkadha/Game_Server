#pragma once
#include "stdafx.h"
#include "Board.h"
#include "Input.h"
class Player
{
public:
	Player();
	~Player();
	void Init();
	void Update();
	void Render();
	void Destroy();
private:
	Pos pos;
};



