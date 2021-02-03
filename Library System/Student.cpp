//Student.cpp
//Member and friend function definitions of class Student
#include "Student.h"

Student::Student(Date sd, string sn,
	string Dept)
	:Person(sd,sn)
{
	this->Dept=Dept;
}

Student::~Student()
{
}

void Student::print() const
{
	Person::print();
	cout << "\n\tDept : " << Dept;
}
