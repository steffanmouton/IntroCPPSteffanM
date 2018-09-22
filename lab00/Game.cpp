#include "Game.h"

//each hero deals damage to the other, whoever is left 
//with more health is returned as winner
Hero Game::Battle(Hero & h1, Hero & h2)
{
	Hero winner;

	//Heros hit each other
	h1.Fight(h2);
	h2.Fight(h1);


	//Winner = Higher HP
	if (h1.HpCheck() > h2.HpCheck())
	{
		winner = h1;
	}
	else
	{
		winner = h2;
	}

	return winner;
}