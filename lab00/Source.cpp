#include <iostream>
#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	srand(time(NULL));
	
	Hero* IronMan = new Hero("IronMan");	
	Hero* Panther = new Hero("BlackPanther");	
	Hero* Machine = new Hero("WarMachine");	
	Hero* Spidey = new Hero("SpiderMan");

	Hero hero5 = Hero("Vision");
	Hero* Vision = &hero5;

	Hero hero6 = Hero("CaptainAmerica");
	Hero* Cap = &hero6;

	Hero hero7 = Hero("Hawkeye");
	Hero* Hawkeye = &hero7;

	Hero hero8 = Hero("Falcon");
	Hero* Falcon = &hero8;

	Hero hero9 = Hero("Winter Soldier");
	Hero* Bucky = &hero9;

	Hero hero10 = Hero("AntMan");
	Hero* AntMan = &hero10;


	Game Arena;

	Stack Team1;
	Stack Team2;
	Stack Winners;
	Stack Losers;

	Team1.Push(IronMan);
	Team1.Push(Panther);
	Team1.Push(Machine);
	Team1.Push(Spidey);
	Team1.Push(Vision);

	Team2.Push(Cap);
	Team2.Push(Hawkeye);
	Team2.Push(Falcon);
	Team2.Push(Bucky);
	Team2.Push(AntMan);

	//Battle Team 1 vs Team 2, push Winners into Winner Stack and Losers into Loser Stack
	for (int i = 0; i < 5; i++)
	{
		Game::Resolution result = Arena.Battle((Hero&)Team1.Top(), (Hero&)Team2.Top());

		Hero* wPtr = &(result.winner);
		Hero* lPtr = &(result.loser);

		Winners.Push(wPtr);
		Losers.Push(lPtr);

		Team1.Pop();
		Team2.Pop();

		std::cout << "\n\nBattle: " << i+1 << "\nThe winner is: " << result.winner.Info() << std::endl
			<< "\nThe loser is: " << result.loser.Info() << std::endl;
	}
}