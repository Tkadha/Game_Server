#pragma once
#include <iostream>
#include <conio.h>
//#include <string.h>
//#include <WinSock2.h>
//#include <WS2tcpip.h>
#include <Windows.h>

const int Board_X = 10;
const int Board_Y = 10;

const int ESCAPE = 27;

const int UP = 72;
const int DOWN = 80;
const int LEFT = 75;
const int RIGHT = 77;


enum E_BOARD_TYPE {
	E_WALL,
	E_EMPTY,
	E_PLAYER
};

struct Pos {
	int x;
	int y;
};