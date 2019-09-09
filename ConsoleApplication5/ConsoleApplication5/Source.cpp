#include <iostream>
#include "Person.h"
#include "Bus.h"


//make Row getSeats return by ref
//store some fields as pointers -> new/delete
//create a macro of a function

//template argument deduction?
// selection initialization
// turn union into a variant?


int main()
{
	std::cout << "Hello CppCon 2019!\n";

	Person driver("Bob", "Smith");
	Bus bus(5, small);

	Driver d;
	Captain c{ 6 };
	d.captain = c;
	bus.assignDriver(d);

	Person p1{ "Tim", "Johnson" };
	Person p2{ "Sally", "Carson" };

	bus.seatPassenger(2, 2, p1);
	bus.seatPassenger(1, 0, p2);

	std::cout << "Driver is " << bus.getDriverNumber(captainDriver) << "\n";
	
	bus.printBus();
	std::cout << "\n";

	bus.removePassenger(2, 2);
	std::cout << "Removed Sally from the bus!" << "\n";

	Robot r{ 42 };
	d.robot = r;
	bus.assignDriver(d);
	std::cout << "Driver is " << bus.getDriverNumber(robotDriver) << "\n";

	bus.printBus();
	std::cout << "\n";
	std::cout << bus.averagePassengersPerRow();
	
	return 0;
}
