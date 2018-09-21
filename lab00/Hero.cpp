#include "Hero.h"

void Hero::TakeDamage(int& power)
{
	mHealth -= power;
}

int Hero::HpCheck(Hero hero)
{
	return hero.mHealth;
}

void Hero::Fight(Hero & hero)
{
	hero.TakeDamage(mPower);
}

