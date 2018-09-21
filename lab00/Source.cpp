#include <iostream>
#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	srand(time(NULL));

	Hero hero1 = Hero("IronMan");
	Hero hero2 = Hero("CaptainAmerica");

	Game Arena;

	std::cout << "The winner is: " << Arena.Battle(hero1, hero2).Info();

}