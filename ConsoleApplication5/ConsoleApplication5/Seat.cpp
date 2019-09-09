#include "Seat.h"

void Seat::seatPassenger(Person p)
{
	occupied = true;
	occupant = p;

}

void Seat::removePassenger()
{
	occupied = false;
	occupant = {};
}

bool Seat::isOccupied()
{
	return occupied;
}

Seat::Seat()
{
}
