#pragma once
#include <vector>
#include "Seat.h"
class Row
{
private:
	int rowCapacity = 3;
	int rowNumber;
	std::vector<Seat> seats;
public:
	int getRowCapacity();
	std::vector<Seat> getSeats();
	void occupy(int seat, Passenger p);
	void remove(int seat);
	Row(int rowNum);
};

