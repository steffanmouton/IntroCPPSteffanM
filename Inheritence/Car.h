#pragma once
#include "TransportVehicle.h"

class Car : public TransportVehicle
{
private:
	void Drive();

public:
	Car();
	virtual void Move() override;
};