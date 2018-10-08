#include "Plane.h"

void Plane::Fly()
{
	//Make Plane Go
}

Plane::Plane()
{
	mSpeed = 100;
	mSeats = 300;
	canFly = 1;
}

void Plane::Move()
{
	Fly();
}
