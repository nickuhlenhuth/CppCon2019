#pragma once
#include "Person.h"
#include <optional>
class Seat
{
private:
	bool occupied = false;
	std::optional<Person> occupant;
public:
	void seatPassenger(Person p);
	void removePassenger();
	bool isOccupied();
	operator bool() {
		return occupied;
	}
	Seat();
};

