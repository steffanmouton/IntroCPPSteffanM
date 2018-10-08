#include "Bike.h"

void Bike::Pedal()
{
	//Make Bike Go
}

Bike::Bike()
{
	mSpeed = 3;
	mSeats = 1;
	canFly = 0;
}

void Bike::Move()
{
	Pedal();
}

