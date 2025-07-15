#pragma once
#include <memory>

class Game
{
public:
	void run();

private:
	void processInput();
	void update();
	void render();
	bool isRunning = true;
};