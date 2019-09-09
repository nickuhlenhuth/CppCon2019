#include <iostream>
#include "Person.h"
#include "Driver.h"
#include "Bus.h"

int main()
{
	std::cout << "Hello CppCon 2019\n";
	Driver d = Driver("Bob", "Smith", 5, 9);
	Bus bus = Bus(5);
	bus.assignDriver(d);
	
	Passenger p1 = Passenger("Tim", "Johnson", true);
	Passenger p2 = Passenger("Sally", "Carson", true);
	bus.seatPassenger(2, 2, p1);
	bus.seatPassenger(1, 0, p2);
	
	bus.printBus();
	std::cout << "\n";

	bus.removePassenger(2, 2);
	bus.printBus();
	

	//std::string first = "Bill";
	//std::string last = "Smith";
	//Person p = Person(first, last, Guest);

	//std::cout << "Person " << p.getFullName() << " " << p.getClassification() << "\n";

	//Driver d = Driver(first, last, 5, 9);
	//std::cout << "Driver " << d.getFullName() << " " << d.getClassification() << " " << d.getHoursOfSleep() << "\n";

	return 0;
}
