#include "Row.h"

int Row::getRowCapacity()
{
	return rowCapacity;
}

std::vector<Seat> Row::getSeats()
{
	return seats;
}

void Row::occupy(int seat, Passenger p)
{
	seats[seat].seatPassenger(p);
}

void Row::remove(int seat)
{
	seats[seat].removePassenger();
}

Row::Row(int rowNum)
{
	rowNumber = rowNum;
	seats = std::vector<Seat>(getRowCapacity(), Seat());
}
