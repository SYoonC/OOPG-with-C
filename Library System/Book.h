//Book.h
//Definition of class Book
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#pragma once

#include "Author.h"
#include "Publisher.h"
#include "Date.h"

class Book 
{
public:
	Book(Author, Publisher, Date, string);
	~Book();
	virtual void print() const;

private:
	Author BookAuthor;
	Publisher BookPublisher;
	Date PublishDate;
	string BookTitle;
};

