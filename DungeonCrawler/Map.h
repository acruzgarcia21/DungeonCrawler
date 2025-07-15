#pragma once
#include <vector>
#include <string>

class Map
{
public:
	Map();
	void draw(int playerX, int playerY) const;
	bool isWalkable(int x, int y) const;

private:
	std::vector<std::string> grid;
};
