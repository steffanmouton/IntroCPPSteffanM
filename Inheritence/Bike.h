#pragma once
#include "TransportVehicle.h"

class Bike : public TransportVehicle
{
private:
	void Pedal();

public:
	Bike();
	virtual void Move() override;
};