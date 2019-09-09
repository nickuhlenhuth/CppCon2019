#pragma once
#include "Person.h"
class Driver :
	public Person
{
private:
	int yearsExperience;
	int hoursOfSleep;
public:
	int getYearsExperience();
	int getHoursOfSleep();
	Driver(std::string first, std::string last, int years, int hours);
};

