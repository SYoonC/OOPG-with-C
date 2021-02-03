//Book.cpp
//Member and friend function definitions of class Book
#include "Book.h"

Book::Book(Author ba, Publisher bp, Date bd, string bt)
	: BookAuthor(ba),BookPublisher(bp),PublishDate(bd)
{
	BookTitle = bt; 
}

Book::~Book()
{
}


void Book::print() const
{
	cout << "\tBook Title : " << BookTitle << endl;
	BookAuthor.print();
	cout << endl;
	BookPublisher.print();
	cout << endl;
	cout << "\tPublish Date : ";
	PublishDate.print();
}
