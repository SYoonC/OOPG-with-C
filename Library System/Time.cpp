//Time.cpp
//Member and friend function definitions of class Time
#include "Time.h"

Time::Time(int s, int m, int h)
{
	setTime(s, m, h);
}

Time::~Time()
{
}

void Time::setTime(int s, int m , int h)
{
	// each parameter should be between 0 and 60
	second = (s >= 0 && s <= 60) ? s : 0;
	minute = (m >= 0 && m <= 60) ? m : 0;
	hour = (h >= 0 && h <= 60) ? h : 0;
}

void Time::print() const
{
	cout << hour << " : " << minute << " : " << second;
}
