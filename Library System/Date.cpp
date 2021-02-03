//Date.cpp
//Member and friend function definitions of class Date
#include "Date.h"

Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}

Date::~Date()
{
}

void Date::setDate(int d, int m, int y)
{
	//Let the date input be relevant with the month
	//For example there are only 30 days in Feb
	//Hence if a user inputs 31 as a date it will be initialised to 1
	month = (m > 0 && m < 13) ? m : 1;
	year = (y >= 1900) ? y : 1900;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d > 0 && d < 32)
		{
			day = d;
		}
		else
			day = d - 31;
	}
	else if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d > 0 && d < 31)
		{
			day = d;
		}
		else
			day = d - 30;
	}
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

void Date::print() const
{
	cout << day << " / " << month << " / " << year;
}
