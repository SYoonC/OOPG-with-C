//Person.h
//Definition of class Person
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#include "Date.h"

#pragma once

class Person
{
public:
	Person(Date, string=0);
	~Person();
	string getName();
	void setName(string);
	virtual void print() const;
private:
	string Name;
	Date DOB;
};

