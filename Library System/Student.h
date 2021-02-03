//Student.h
//Definition of class Student
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once
#include "Person.h"

class Student :
    public Person
{
public:
    Student(Date, string=0, string = 0);
    ~Student();
    virtual void print() const;
private:
    string Dept;
};

