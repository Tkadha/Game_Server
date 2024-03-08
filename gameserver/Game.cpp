#include "Game.h"
Game::Game()
{
}

Game::~Game()
{
}

void Game::Init()
{
	player->Init();
}

void Game::Update()
{
	player->Update();
}

void Game::Render()
{
	player->Render();

}

void Game::Destroy()
{
}
