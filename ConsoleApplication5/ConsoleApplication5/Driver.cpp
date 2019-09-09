#include "Driver.h"

int Driver::getYearsExperience()
{
	return yearsExperience;
}

int Driver::getHoursOfSleep()
{
	return hoursOfSleep;
}

Driver::Driver(std::string first, std::string last, int years, int hours):Person(first, last, Worker){
	yearsExperience = years;
	hoursOfSleep = hours;
}


