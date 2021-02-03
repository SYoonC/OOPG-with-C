/*
BEGIN
NUMBER FileSize, Time
OUTPUT
	“Enter the number of characters in your file : “
INPUT
	FileSize
Time = FileSize / 960
OUTPUT
	Time “seconds taken to transmit your file.”
END
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int size;
	double time;

	cout << "Input the file size in number of characters (positive integer) : ";
	cin >> size;
	
	if (cin.fail())
	{
		cout << "ERROR - The input value is not valid.\n\n";
	}
	else
	{
		time = (double)size / 960;

		cout << "Time take to transmit your file : " << time << " sec\n\n";
		
	}

	return 0;
}
