#include "Library.h"
#include "Game.h"

using namespace std;

int main() {
	Game game;
	game.ResizeConsole(1280, 720);
	game.FixConsoleWindow();
cout << 1;
	game.menu();
	return 0;
}