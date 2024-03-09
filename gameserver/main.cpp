#include "stdafx.h"
#include "Board.h"
#include "Input.h"
#include "Game.h"


int main() {
	Board::Init();
	Input input;
	Game game;
	input.Init();
	game.Init();
	Board::Render();
	while (true) {
		input.Update();
		game.Update();
		if (Input::input) {
			gotoxy(0, 0);
			Board::Render();
		}
		if (Input::command[0] == ESCAPE) break;
	}
	return 0;
}

