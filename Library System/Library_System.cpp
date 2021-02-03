//Main.cpp
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#include "Borrow.h"
#include "Book.h"

int main()
{
	cout << "BUCKINGHAM LIBRARY BORROWING SYSTEM\n\n";

	//New Book Creation
	cout << "BOOK *****************\n";
	//Book Title Info
	string BookTitle;
	cout << "Book Title : ";
	getline(cin, BookTitle);
	//Author Info
		//Author Name
	string AuthorName;
	cout << "Author Name : ";
	getline(cin, AuthorName);
	//Author DOB
	int DOBd, DOBm, DOBy;
	cout << "Author Date of Birth (dd mm yy) : ";
	cin >> DOBd >> DOBm >> DOBy;
	Date NBAutDOB(DOBd, DOBm, DOBy);
	cin.ignore();
	//Author Employer
	string AuthorEmp;
	cout << "Author Employer : ";
	getline(cin, AuthorEmp);
	//Author Info Compile
	Author NBAut(NBAutDOB, AuthorName, AuthorEmp);
	//Publisher Info
		//Publisher Name
	string PubName;
	cout << "Publisher : ";
	getline(cin, PubName);
	Publisher Pub(PubName);
	//Publish Date
	int PDd, PDm, PDy;
	cout << "Publish Date (dd mm yy) : ";
	cin >> PDd >> PDm >> PDy;
	Date PubDate(PDd, PDm, PDy);
	//Book Complie
	Book NewBook(NBAut, Pub, PubDate, BookTitle);
	cin.ignore();

	//New Borrowing Creation
	cout << "\nSTUDENT *******************\n";
	//Student Info
		//Student Name
	string bStudent;
	cout << "Borrowing Student : " << endl;
	cout << "\tStudent Name : ";
	getline(cin, bStudent);
	//Student Date
	int bod1, bod2, bod3;
	cout << "\tStudent Date of Birth (dd mm yy) : ";
	cin >> bod1 >> bod2 >> bod3;
	Date StuDate(bod1, bod2, bod3);
	cin.ignore();
	//Student Dept
	string bDept;
	cout << "\tStudent Department : ";
	getline(cin, bDept);
	//Student Compile
	Student bStu(StuDate, bStudent, bDept);
	//Borrowing Time Info
	int bh, bmm, bs;
	cout << "\tBorrowed Time (hh:mm:ss) : ";
	cin >> bh >> bmm >> bs;
	Time bTime(bh, bmm, bs);
	//Borrowing Date Info
	int bd, bm, by;
	cout << "\tBorrowed Date (dd mm yy) : ";
	cin >> bd >> bm >> by;
	Date bDate(bd, bm, by);
	//Returning Date Info
	int rd, rm, ry;
	cout << "\tReturning Date (dd mm yy) : ";
	cin >> rd >> rm >> ry;
	Date rDate(rd, rm, ry);
	//Borrowing Compile
	Borrow StuBor(NewBook, bStu, bTime, bDate, rDate);


	cout << "\n\nBorrowing Details ***************";

	//New Book Print
	cout << "\nBook Info : " << endl;
	NewBook.print();
	//New Borrowing Print
	cout << "\n\nStudent Info : " << endl;
	StuBor.print();

	cout << "\n\n\n*******************SUCCESSFULLY BORROWED*******************\n\n\n";
}
