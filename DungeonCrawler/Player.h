#pragma once
#include "Map.h"

class Player 
{
public:
	Player(int startX, int startY);
	void move(int dx, int dy, const Map& map);
	int  getX() const;
	int getY() const;

private:
	int x, y;
};
