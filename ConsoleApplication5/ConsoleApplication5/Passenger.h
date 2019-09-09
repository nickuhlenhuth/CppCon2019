#pragma once
#include "Person.h"
class Passenger :
	public Person
{
private:
	bool hasTicket;
public:
	bool getHasTicket();
	Passenger(std::string first, std::string last, bool ticket);
};

