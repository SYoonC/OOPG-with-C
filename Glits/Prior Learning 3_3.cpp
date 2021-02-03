/*
BEGIN
	 NUMBER Rows, i, j, k
	CHARACTER Char
OUTPUT “Enter the number of rows you want to create : ”
INPUT Rows
OUTPUT “Enter the character you want to use : ”
INPUT Char

(First Shape)
FOR i = 0 TO Rows STEP 1 DO
FOR k = 0 TO Rows – i Do
OUTPUT “ “
	FOR j = 0 TO i DO
		OUTPUT Char
OUTPUT “/n”
END

(Second Shape)
FOR i = 0 TO Rows STEP 1 DO
	FOR j = 0 TO Rows - i DO
		OUTPUT Char
OUTPUT “/n”
END

(Third Shape)
FOR i = 0 TO Rows STEP 1 DO
	FOR j = 0 TO i DO
		OUTPUT Char
	FOR k = i to Rows-1 STEP 1 DO
		OUTPUT “ “
OUTPUT “/n”
END 
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int rows;
	char character;

	cout << "Enter the number of rows : ";
	cin >> rows;
	cout << "Enter the character : ";
	cin >> character;

	cout << "\n\nFirst Shape\n\n";
	for (int i = 0; i <= rows - 1; i++)
	{
		for (int k = 0; k <= rows - 2 - i; k++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << character << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";

	cout << "Second Shape\n\n";
	for (int i = 0; i <= rows - 1; i++) 
	{ 
		for (int k = 0; k < i; k++) 
		{  
			cout << "  ";
		}
		for (int j = 0; j <= rows - 1 - i; j++)
		{ 
			cout << character <<" ";
		}
		cout << "\n"; 
	}
	cout << "\n\n";

	cout << "Third Shape\n\n";
	for (int i = 0; i <= rows - 1; i++) {
		for (int k = i; k <= rows - 2; k++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << character<<" ";
		}
		cout << "\n";
	}
	cout << "\n";


	return 0;
}