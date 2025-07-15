#include "Map.h"
#include <iostream>

Map::Map() {
	grid = {
	"##########",
	"#        #",
	"#  ####  #",
	"#        #",
	"##########"
	};
}

void Map::draw(int playerX, int playerY) const{
	for (int row = 0; row < grid.size(); ++row) {
		for (int col = 0; col < grid[row].size(); ++col) {
			if (col == playerX && row == playerY) {
				// Player Symbol
				std::cout << "@";
			}
			else {
				std::cout << grid[row][col];
			}
		}
		std::cout << "\n";
	}
}

bool Map::isWalkable(int x, int y) const {
	if (y < 0 || y >= grid.size()) return false;
	if (x < 0 || x >= grid[y].size()) return false;
	return grid[y][x] == ' ';
}