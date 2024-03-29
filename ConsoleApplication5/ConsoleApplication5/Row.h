#pragma once
#include <vector>
#include "Seat.h"
#include <numeric>

const int rowCapacity = 3;

class Row
{
private:
	int rowNumber;
	std::vector<Seat> seats;
public:
	int getRowCapacity();
	std::vector<Seat>& getSeats();
	void occupy(int seat, Person p);
	void remove(int seat);
	operator int() {
		return std::accumulate(std::begin(seats), std::end(seats), 0);
	}
	Row(int rowNum);
};

