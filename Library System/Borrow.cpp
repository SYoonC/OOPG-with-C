//Borrow.cpp
//Member and friend function definitions of class Borrow
#include "Borrow.h"

Borrow::Borrow(Book b, Student s, Time t, Date d1, Date d2)
	:BorBook(b),BorStd(s),BorTime(t)
{
	BorrowDate = d1;
	ReturnDate = d2;
}

Borrow::~Borrow()
{
}

void Borrow::print() const
{
	BorStd.print();
	cout << endl;
	BorBook.print();
	cout << endl;
	cout << "\tBorrowed Time : ";
	BorTime.print();
	cout << "\n\tBorrowed Date : ";
	BorrowDate.print();
	cout << "\n\tReturning Date : ";
	ReturnDate.print();
}
