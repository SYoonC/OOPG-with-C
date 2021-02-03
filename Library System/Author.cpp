//Author.cpp
//Member and friend function definitions of class Author
#include "Author.h"

Author::Author(Date ad, string an, string Employer)
	:Person(ad,an)
{
	this->Employer=Employer;
}

Author::~Author()
{
}

void Author::print() const
{
	Person::print();
	cout << "\n\tEmployer : " << Employer;
}
