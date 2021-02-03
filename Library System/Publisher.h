//Publisher.h
//Definition of class Publisher
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once

class Publisher
{
public:
	Publisher(string=0);
	~Publisher();
	virtual void print() const;
private:
	string Name;
};

