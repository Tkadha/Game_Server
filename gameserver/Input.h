#pragma once
#include "stdafx.h"

class Input
{
public:
	Input();
	~Input();
	void Init();
	void Update();
	void Render();
	void Destroy();

	static int input;
	static char command[1];
	static int key;

private:
};

