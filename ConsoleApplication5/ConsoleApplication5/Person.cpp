#include "Person.h"

std::string Person::getFullName()
{
	return firstName + " " + lastName;
}

classification Person::getClassification()
{
	return role;
}

Person::Person()
{
	firstName = "";
	lastName = "";
	role = Guest;
}
