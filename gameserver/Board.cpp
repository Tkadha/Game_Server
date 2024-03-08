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
			if ((i == 0) || (j == 0) || (i == Board_Y - 1) || (j == Board_X - 1)) board[j][i] = E_BOARD_TYPE::E_WALL;
			else board[j][i] = E_BOARD_TYPE::E_EMPTY;
		}
	}
}

void Board::Render()
{
	for (int i = 0; i < Board_Y; ++i) {
		for (int j = 0; j < Board_X; ++j) {
			switch (board[j][i])
			{
			case E_BOARD_TYPE::E_WALL:
				std::cout << "¡ß";
				break;
			case E_BOARD_TYPE::E_EMPTY:
				std::cout << "  ";
				break;
			case E_BOARD_TYPE::E_PLAYER:
				std::cout << "¨Ü";
				break;
			default:
				break;
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
