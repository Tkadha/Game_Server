#pragma once
#include <iostream>
#include <conio.h>

const int Board_X = 8;
const int Board_Y = 8;

const int ESCAPE = 27;

const int UP = 72;
const int DOWN = 80;
const int LEFT = 75;
const int RIGHT = 77;


enum E_BOARD_TYPE {
	E_EMPTY,
	E_PLAYER
};

enum E_PACKET_TYPE {
	E_UPLOAD,
	E_MOVE
};

struct Pos {
	int x;
	int y;

	Pos& operator=(const Pos& other) {
		if (this != &other) {
			x = other.x;
			y = other.y;
		}
		return *this;
	 }
};
