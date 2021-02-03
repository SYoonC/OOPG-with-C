//Publisher.cpp
//Member and friend function definitions of class Publisher
#include "Publisher.h"

Publisher::Publisher(string Name)
{
	this->Name = Name;
}

Publisher::~Publisher()
{
}

void Publisher::print() const
{
	cout << "\tPublisher : " << Name;
}
