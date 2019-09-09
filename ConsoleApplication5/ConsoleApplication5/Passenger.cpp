#include "Passenger.h"

bool Passenger::getHasTicket()
{
	return hasTicket;
}

Passenger::Passenger(std::string first, std::string last, bool ticket) :Person(first, last, Guest) {
	hasTicket = ticket;
}
