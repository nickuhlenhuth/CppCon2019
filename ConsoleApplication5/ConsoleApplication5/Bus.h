#pragma once
#include <vector>
#include "Row.h"
#include "Person.h"
#include "Robot.h"
#include "Captain.h"
#include "Engine.h"
#include <numeric>

#define AVERAGE(range) std::accumulate(std::begin(range), std::end(range), 0.0f) / range.size()

enum EngineType { small, medium, large };

enum DriverType {robotDriver, captainDriver};
union Driver {
	Robot robot;
	Captain captain;
};


class Bus
{
	//std::optional<Driver> driver;
	Driver driver;
	int capacity;
	int numRows;
	std::vector<Row> rows;
	Engine* engine;

public:
	Bus(int numberRows, EngineType et)
	{
		switch (et) {
		case small:
			engine = new SmallEngine;
			break;
		case medium:
			engine = new MedEngine;
			break;
		case large:
			engine = new LargeEngine;
			break;
		}
		for (int i = 0; i < numberRows; i++) {
			rows.push_back(Row(i));
		}
	}

	~Bus() {
		delete engine;
	}
	void assignDriver(Driver d)
	{
		driver = d;
	}
	int getCapacity()
	{
		return capacity;
	}

	int getNumRows()
	{
		return numRows;
	}

	float averagePassengersPerRow() {
		return AVERAGE(rows);
	}

	void seatPassenger(int rowNum, int seatNum, Person passenger)
	{
		rows[rowNum].occupy(seatNum, passenger);
	}
	void removePassenger(int rowNum, int seatNum)
	{
		rows[rowNum].remove(seatNum);
	}

	void printBus()
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

	int getDriverNumber(DriverType dt) {
		switch (dt) {
		case robotDriver:
			return driver.robot.robotID;
			break;
		case captainDriver:
			return driver.captain.badgeNumber;
			break;
		}
	}

};