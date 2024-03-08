#include "Player.h"
Player::Player():pos{1,1}
{
	Board::board[pos.x][pos.y] = E_BOARD_TYPE::E_PLAYER;
}

Player::~Player()
{
}

void Player::Init()
{
}

void Player::Update()
{
	if (Input::input) {
		Board::board[pos.x][pos.y] = E_BOARD_TYPE::E_EMPTY;
		switch (Input::command[0])
		{
		case UP:
			if (pos.y > 1)
				pos.y--;
			break;
		case DOWN:
			if (pos.y < Board_Y - 2)
				pos.y++;
			break;
		case LEFT:
			if (pos.x > 1)
				pos.x--;
			break;
		case RIGHT:
			if (pos.x < Board_X - 2)
				pos.x++;
			break;
		default:
			break;
		}
		Board::board[pos.x][pos.y] = E_BOARD_TYPE::E_PLAYER;
		
	}
}

void Player::Render()
{
}

void Player::Destroy()
{
}