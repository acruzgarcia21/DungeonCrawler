#include "Game.h"
#include "Map.h"
#include "Player.h"

#include <iostream>
// For _kbhit() and _getch()
#include <conio.h>
// For sleep()
#include <Windows.h>

std::unique_ptr<Map> map = std::make_unique<Map>();
std::unique_ptr<Player> player = std::make_unique<Player>(1, 1);

void Game::run() {
	while (isRunning) {
		processInput();
		update();
		render();
		Sleep(100);
	}
}

void Game::processInput() {
	// Keyboard Hit
	if (_kbhit) {
		char key = _getch();
		switch (key) {
		case 'w': player->move(0, -1, *map); break;
		case 's': player->move(0, 1, *map); break;
		case 'a': player->move(-1, 0, *map); break;
		case 'd': player->move(1, 0, *map); break;
		case 'q': isRunning = false; break;
		}
	}
}

void Game::update() {

}

void Game::render() {
	system("cls");
	map->draw(player->getX(), player->getY());
}