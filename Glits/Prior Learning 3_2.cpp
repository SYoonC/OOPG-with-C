/*
BEGIN
	STORE UserPin in system
	NUMBER PIN
	CHARACTER Transaction, Initial_Deposit, Balance, Deposit_Amount, Withdraw_Amount, Year, Interest as 3.3%, Counter
OUTPUT
	“Enter your PIN : ”
INPUT
	PIN
IF (UserPin != PIN) THEN
	OUTPUT “Enter your PIN again (Attempt 2 Left) : “
		IF (UserPin != PIN) THEN
			OUTPUT “Enter your PIN again (Attempt 1 Left) : “
		ELSE THEN EXIT the loop
				IF (UserPin != PIN) THEN
					OUTPUT HALT
				ELSE THEN EXIT the loop
ELSE THEN
	OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
	INPUT Transaction
	IF (Transaction == O)
		OUTPUT “Initial Deposit?”
		INPUT Initial_Deposit
		OUTPUT “Account opened with 	your initial deposit of ” Initial_Deposit
		OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
		INPUT Transaction
	IF (Transaction == B)
		OUTPUT Balance
		OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
		INPUT Transaction
	IF (Transaction == D)
		OUTPUT “Enter your deposit amount : ”
		INPUT Deposit_Amount
		OUTPUT Balance “is your balance before the deposit.”
		Balance = Balance + Deposit_Amount
		OUTPUT Balance “is your balance after the deposit.”
		OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
		INPUT Transaction
	IF (Transaction == W)
		OUTPUT “Enter your withdrawal amount : ”
		INPUT Withdraw_Amount
		IF (Withdraw_Amount <= Balance)
			OUTPUT “Your transaction is complete. Please take your cash and receipt.”
		ELSE IF
			OUTPUT “Your transaction is not complete. Please check your balance.”
		Balance = Balance – Withdraw_Amount
		OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
		INPUT Transaction
	IF (Transaction == I)
		OUTPUT “The interest rate is 3.3%.”
		OUTPUT “Enter the years of your planned saving : ”
		INPUT Year
		FOR counter=0 TO Years STEP 1 DO
			Balance = Balance * 1.033
		OUTPUT “The new balance is ” Balance
		OUTPUT “Enter the transaction type – O, B, D, W, I, E only : ”
		INPUT Transaction
	IF (Transaction == E)
		Output “Thank you for using our service.”
		END
	ELSE IF
		OUTPUT “You have attempted an illegal action.”
END

*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int PIN, Year, attempt(0);
	char transType;
	float InitialDeposit, Balance(0), Deposit_Amount, Withdraw_Amount;

	cout << "Enter your PIN (for this code only, the PIN should be 1111) : ";
	cin >> PIN;

	//PIN check (For this code, PIN should be 1111)

	if (cin.fail())
	{
		cout << "ERROR - Your input is invalid.\n\n";
	}

	else
	{
		while (attempt < 3)
		{
			if (PIN == 1111)
			{
				cout << "\n\nO for opening an account\nB for balance check\nD for deposit\nW for withdrawal\nI for interest invest\nE for exit\n\n\nEnter the transaction type from above only : ";
				cin >> transType;

				while (transType != 'E')
				{
					if (transType == 'O')
					{
						cout << "Initial Deposit : ";
						cin >> InitialDeposit;
						if (cin.fail())
						{
							cout << "ERROR - Your input is invalid.\n\n";
							return 0;
						}
						else
						{
							Balance = Balance + InitialDeposit;
							cout << "Account opened with your initial deposit of :  " << InitialDeposit;
							cout << "\n\nEnter the next transaction type : ";
							cin >> transType;
						}
					}
					else if (transType == 'B')
					{
						cout << "Your balance :  " << Balance;
						cout << "\n\nEnter the next transaction type : ";
						cin >> transType;
					}
					else if (transType == 'D')
					{
						cout << "Enter your deposit amount : ";
						cin >> InitialDeposit;
						if (cin.fail())
						{
							cout << "ERROR - Your input is invalid.\n\n";
							return 0;
						}
						else
						{
							cout << Balance << "  is your balance before the deposit." << endl;
							Balance = Balance + InitialDeposit;
							cout << Balance << "  is your balance after the deposit.";
							cout << "\n\nEnter the next transaction type : ";
							cin >> transType;
						}
					}
					else if (transType == 'W')
					{
						cout << "Enter your withdrawal amount :  ";
						cin >> Withdraw_Amount;
						if (cin.fail())
						{
							cout << "ERROR - Your input is invalid.\n\n";
							return 0;
						}
						else
						{
							if (Withdraw_Amount <= Balance)
							{
								cout << "Your transaction is complete. Please take your cash and receipt.";
								Balance = Balance - Withdraw_Amount;
							}
							else if (Withdraw_Amount > Balance)
							{
								cout << "ERROR \n\tYour transaction is not complete. Please check your balance.";

							}
							cout << "\n\nEnter the next transaction type : ";
							cin >> transType;
						}
					}
					else if (transType == 'I')
					{
						cout << "The interest rate is 3.3%.\nEnter the years of your planned saving :  ";
						cin >> Year;
						if (cin.fail())
						{
							cout << "ERROR - Your input is invalid.\n\n";
							return 0;
						}
						else
						{
							for (int i = 0; i < Year; i++)
							{
								Balance = Balance * 1.033;
							}
							cout << "The new balance :  " << Balance;
							cout << "\n\nEnter the next transaction type : ";
							cin >> transType;
						}
					}
					else
					{
						cout << "ERROR\n\tYou have attempted an illegal action. Please enter your action again. : ";
						cin >> transType;
					}
				}
				attempt = 3;
			}

			else
			{
				attempt++;
				cout << "Enter your PIN again (Attempt " << 3 - attempt << " Left) : ";
				cin >> PIN;
				if (cin.fail())
				{
					cout << "ERROR - Your input is invalid.\n\n";
					return 0;
				}
			}

		}
		cout << "\n********************************" << endl << "Thank you for using our service." << endl << "********************************\n";
	}

	return 0;
}
