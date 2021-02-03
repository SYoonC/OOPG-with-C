//Person.cpp
//Member and friend function definitions of class Person
#include "Person.h"
#include "Date.h"

Person::Person(Date d, string n)
	:DOB(d)
{
	setName(n);
}

Person::~Person()
{
}

string Person::getName()
{
	return Name;
}

void Person::setName(string n)
{
	Name = n;
}

void Person::print() const
{
	cout << "\tName : " << Name << endl;
	cout << "\tDate of Birth : ";
	DOB.print();
}
