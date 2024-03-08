#include "Input.h"
int Input::input = 0;
char Input::command[] = {};
int Input::key = 0;
Input::Input()
{

}

Input::~Input()
{

}

void Input::Init()
{
	key = 0;
	input = 0;
}

void Input::Update()
{
	input = _kbhit();
	if (input) {
		command[0] = _getch();
		if (command[0] == -32) {
			command[0] = _getch();
			key = command[0];
		}
	}
}

void Input::Render()
{
}

void Input::Destroy()
{
}