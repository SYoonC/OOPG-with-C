//Date.h
//Definition of class Date
#pragma once
#include <iostream>
using namespace std;

class Date
{
public :
	Date(int =1, int=1, int=1900); //Default Constructor
	~Date();
	void setDate(int , int , int );
	int getDay();
	int getMonth();
	int getYear();
	virtual void print() const;

protected:
	int day;
	int month;
	int year;
};

