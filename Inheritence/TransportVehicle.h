#pragma once

class TransportVehicle
{
private:
	bool holdPassengers = 1;

protected:
	virtual void Move() = 0;
	int mSpeed;
	int mSeats;
	bool canFly;

public: 

};