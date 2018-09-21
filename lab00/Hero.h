#pragma once
#include <iostream>
#include <time.h>


class Hero
{
private:
	int mHealth;
	int mPower;

public:
	//Default Constructor
	Hero()
	{
		mHealth = 100;
		//assigns random power to each fighter between values 10 - 30
		mPower = rand() % (30 - 10 + 1) + 10;
	}

	void Fight(Hero& hero);

	void TakeDamage(int& power);
	
};
