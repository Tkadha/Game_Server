#include "Board.h"
#include "Input.h"
int Board::board[Board_X][Board_Y];

Board::Board()
{
}

Board::~Board()
{
}

void Board::Init()
{
	for (int i = 0; i < Board_Y; ++i) {
		for (int j = 0; j < Board_X; ++j) {
			board[j][i] = E_BOARD_TYPE::E_EMPTY;
		}
	}
}

void Board::Render()
{
	for (int i = 0; i < Board_Y; ++i) {
		for (int j = 0; j < Board_X; ++j) {
			switch (board[j][i])
			{
			case E_BOARD_TYPE::E_EMPTY:
				((i + j) % 2 == 0) ? std::cout << "��" : std::cout << "��";
				break;
			case E_BOARD_TYPE::E_PLAYER:
				std::cout << "��";
				break;
			default:
				break;
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}


void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}