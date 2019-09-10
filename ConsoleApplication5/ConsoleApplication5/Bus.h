#pragma once
#include <vector>
#include "Row.h"
#include "Person.h"
#include "Robot.h"
#include "Captain.h"
#include "Engine.h"
#include <numeric>
#include <fstream>

#define AVERAGE(range) std::accumulate(std::begin(range), std::end(range), 0.0f) / range.size()

enum EngineType { small, medium, large };

enum DriverType {robotDriver, captainDriver};
union Driver {
	Robot* robot;
	Captain* captain;
};


class Bus
{
	Driver* driver;
	int capacity;
	int numRows;
	std::vector<Row> rows;
	Engine* engine;

public:
	Bus(int numberRows, EngineType et)
	{
		switch (et) {
		case EngineType::small:
			engine = new SmallEngine;
			break;
		case EngineType::medium:
			engine = new MedEngine;
			break;
		case EngineType::large:
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
	void assignDriver(Driver& d)
	{
		driver = &d;
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

	void printBusToFile() {
		std::ofstream myfile("C:\\Users\\nicku\\Desktop\\CppCon2019_demo_output\\output.txt");
		for (auto row : rows) {
			for (auto seat : row.getSeats()) {
				if (seat.isOccupied()) {
					myfile << "X ";
				}
				else {
					myfile << "- ";
				}
			}
			myfile << "\n";
		}
	}


	int getDriverNumber(DriverType dt) {
		switch (dt) {
		case robotDriver:
			return driver->robot->robotID;
		case captainDriver:
			return driver->captain->badgeNumber;
		}
	}


};