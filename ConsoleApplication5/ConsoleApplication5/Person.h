#pragma once
#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;
public:

	std::string getFullName()
	{
		return firstName + " " + lastName;
	}

	Person(std::string first, std::string last) : firstName(first), lastName(last) {}
	//Person() : firstName(""), lastName("") {};

};

