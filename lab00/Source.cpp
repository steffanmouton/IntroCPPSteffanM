#include <iostream>
#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	srand(time(NULL));

	Hero hero1 = Hero("IronMan");
	Hero hero2 = Hero("CaptainAmerica");

	Hero* IronMan = &hero1;
	Hero* Cap = &hero2;

	Game Arena;

	Stack Team1;
	Stack Team2;
	Stack Winners;
	Stack Losers;

	Team1.Push(IronMan);
	Team2.Push(Cap);

	Arena.Battle(Team1.Top(), Team2.Top());

	std::cout << "The winner is: " << Arena.Battle(hero1, hero2).Info();

}