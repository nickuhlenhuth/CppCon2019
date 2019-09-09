#pragma once
#include <vector>
#include "Row.h"
#include "Driver.h"
class Bus
{
private:
	std::optional<Driver> driver;
	int capacity;
	int numRows;
	std::vector<Row> rows;
public:
	void assignDriver(Driver d);
	int getCapacity();
	int calcNumGuest();
	int getNumRows();
	void seatPassenger(int rowNum, int seatNum, Passenger p);
	void removePassenger(int rowNum, int seatNum);
	Bus(int numberRows);
	void printBus();
};

