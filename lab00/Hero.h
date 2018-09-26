#pragma once
#include <iostream>
#include <time.h>
#include <string>


class Hero
{
private:
	int mHealth;
	int mPower;
	std::string mName;

public:
	//Default Constructor
	Hero();
	Hero(std::string);


	std::string Info();
	void Fight(Hero& hero);

	void TakeDamage(int power);

	bool operator > (const Hero& rhs);

	bool operator < (const Hero& rhs);
};