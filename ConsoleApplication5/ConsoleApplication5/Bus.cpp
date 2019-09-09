#include "Bus.h"
#include <iostream>

void Bus::assignDriver(Driver d)
{
	driver = d;
}

int Bus::getCapacity()
{
	return capacity;
}

int Bus::calcNumGuest()
{
	int numGuests = 0;
	for (auto row : rows) {
		for (auto seat : row.getSeats()) {
			numGuests += 1;
		}
	}
	return numGuests;
}

int Bus::getNumRows()
{
	return numRows;
}

void Bus::seatPassenger(int rowNum, int seatNum, Passenger p)
{
	rows[rowNum].occupy(seatNum, p);
}

void Bus::removePassenger(int rowNum, int seatNum)
{
	rows[rowNum].remove(seatNum);
}

Bus::Bus(int numberRows)
{

	for (int i = 0; i < numberRows; i++) {
		rows.push_back(Row(i));
	}
}

void Bus::printBus()
{
	for (auto row : rows) {
		for (auto seat : row.getSeats()) {
			if (seat.isOccupied()) {
				std::cout << "X ";
			}
			else {
				std::cout << "- ";
			}
		}
		std::cout << "\n";
	}
}
