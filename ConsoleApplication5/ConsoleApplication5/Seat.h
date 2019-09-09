#pragma once
#include "Passenger.h"
#include <optional>
class Seat
{
private:
	bool occupied = false;
	std::optional<Passenger> occupant;
public:
	void seatPassenger(Passenger p);
	void removePassenger();
	bool isOccupied();
	Seat();
};

