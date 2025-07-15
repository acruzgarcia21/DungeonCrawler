#include "Player.h"

Player::Player(int startX, int startY) : x(startX), y(startY) {}

void Player::move(int dx, int dy, const Map& map) {
	int newX = x + dx;
	int newY = y + dy;
	if (map.isWalkable(newX, newY)) {
		x = newX;
		y = newY;
	}
}

int Player::getX() const { return x; }
int Player::getY() const { return y; }