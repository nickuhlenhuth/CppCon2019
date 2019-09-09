#include "Seat.h"

void Seat::seatPassenger(Passenger p)
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
