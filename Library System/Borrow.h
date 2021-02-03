//Borrow.h
//Definition of class Borrow
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once

#include "Date.h"
#include "Book.h"
#include "Student.h"
#include "Time.h"

class Borrow
{
public:
    Borrow(Book, //Book
        Student, //Student who'll borrow the book
        Time, // Time the book was borrowed
        Date, // Borrowed date
        Date // Returning date
    );
    ~Borrow();
    virtual void print() const;

private:
    Book BorBook;
    Student BorStd;
    Time BorTime;
    Date BorrowDate;
    Date ReturnDate;
};

