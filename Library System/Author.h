//Author.h
//Definition of class Author
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once
#include "Person.h"

class Author :
    public Person
{
public:
    Author(Date = 0,string = 0, string = 0);
    ~Author();
    virtual void print() const;
private:
    string Employer;
};

