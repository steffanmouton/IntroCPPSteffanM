#pragma once
#include "TransportVehicle.h"

class Plane : public TransportVehicle
{
private:
	void Fly();

public:
	Plane();
	virtual void Move() override;

};