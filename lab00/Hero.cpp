#include "Hero.h"
//removes health of amt power
void Hero::TakeDamage(int power)
{
	mHealth -= power;
}

<<<<<<< HEAD
int Hero::HpCheck(Hero hero)
{
	return hero.mHealth;
}

=======
//returns hero current hp
int Hero::HpCheck()
{
	return mHealth;
}

Hero::Hero()
{
	mHealth = 100;
	//assigns random power to each fighter between values 10 - 30
	mPower = rand() % (30 - 10 + 1) + 10;

}
Hero::Hero(std::string Name) :Hero()
{
	mName = Name;

}
 
std::string Hero::Info()
{
	std::string info;
	
	info.append("Name: " + mName);
	info.append("\nHealth:: " + mHealth);
	return info;
}

//Applies TakeDamage function to the hero
>>>>>>> ff55c13e5fbd77e2481b3d76844006f99605d541
void Hero::Fight(Hero & hero)
{
	hero.TakeDamage(mPower);
}

