#pragma once
#include <string>

enum classification { Worker, Guest };

class Person
{
private:
	std::string firstName;
	std::string lastName;
	classification role;

public:
	std::string getFullName(); // returns firstName lastName
	classification getClassification(); //returns the classification of the Person
	Person(std::string first, std::string last, classification occupation) {
		firstName = first;
		lastName = last;
		role = occupation;
	};
	Person();
};

