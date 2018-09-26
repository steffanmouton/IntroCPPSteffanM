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

	Game::Resolution result = Arena.Battle((Hero&)Team1.Top(), (Hero&)Team2.Top());

	Hero* wPtr = &(result.winner);
	Hero* lPtr = &(result.loser);

	Winners.Push(wPtr);
	Losers.Push(lPtr);


	std::cout << "The winner is: " << result.winner.Info();

}