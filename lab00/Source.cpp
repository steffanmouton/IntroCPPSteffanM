#include <iostream>
#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	srand(time(NULL));

	Hero IronMan;
	Hero CaptAmerica;

	Game Arena;

	Arena.Battle(IronMan, CaptAmerica);

}