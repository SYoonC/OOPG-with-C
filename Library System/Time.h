//Time.h
//Member and friend function definitions of class Date
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once

class Time
{
public:
	Time(int=0,int=0,int=0);
	~Time();
	void setTime(int, int, int);
	virtual void print() const;
private :
	int hour;
	int minute;
	int second;
};

