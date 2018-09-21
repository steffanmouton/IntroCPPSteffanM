#include "Game.h"

//each hero deals damage to the other, whoever is left 
//with more health is returned as winner
Hero Game::Battle(Hero & h1, Hero & h2)
{
	h1.Fight(h2);
	h2.Fight(h1);

	if (h1.HpCheck > h2.HpCheck)
	{
		return h1;
	}
	else
	{
		return h2;
	}
}
