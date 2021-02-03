/*
-a)
BEGIN
    NUMBER n, i, a, b = 1, j, p = 0
OUTPUT “Enter an integer value : ”
INPUT n
FOR i = 1 TO n STEP 1 DO
    a = (-1) to the power of (i-1)
    FOR j = 1 TO i STEP 1 DO
        b = j * b
    p = p + a/b
OUTPUT “The value is ” p

-b)
BEGIN
    NUMBER n, Input, x, sum
OUTPUT “Enter an integer to be checked : ”
INPUT n
Input = n
IF n == 0
    OUTPUT “Not an Armstrong Number.”
ELSE
WHILE modulus[ n / 10 ] >= 0
x = n % 10
sum = x*x*x
n = n / 10
IF sum == Input
    OUTPUT “The integer ” Input “is an Armstrong number.”
ELSE
    OUTPUT “The integer ” Input “is NOT an Armstrong number.”
END

-c)
BEGIN
    NUMBER a, b, i, j, n, Op_Integer as 0
OUTPUT “Enter two binary numbers to be checked, separated in space : “
INPUT a, b
IF a > 0
    IF b > 0
        i = a % 10
        j = b % 10
        n = n+1
        IF i == j
            Op_Integer = Op_Integer + 2 ^ (n-1)
        a = modulus [a / 10]
        b = modulus [b / 10]
OUTPUT “The result is ” Op_Integer
END

-d)
BEGIN
    NUMBER n, x
    STRING Inverse
OUTPUT “Enter a number you want to inverse : ”
INPUT n
IF n > 0
    x = n % 10
    Inverse = Inverse + “x”
    n = n / 10
OUTPUT “The inversed outcome is ” Inverse
END
*/
#include<iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int QuesAFac(int);
double QuesA(int);
int QuesBPower(int);
int QuesB(int);
bool QuesCCheck(int, int);
int QuesC(int, int);
void QuesD(int);

int main()
{
    int n, num, a, b, d;
    string Str_a, Str_b;

    //Question A
    cout << "Question A - Alternating Harmonic Series Function Solver" << endl;
    cout << "Enter a positibe integer : ";
    cin >> n;
    if (cin.fail())
    {
        cout << "ERROR - Your input is not valid. \n";
        return 0;
    }
    else
    {
        cout << "Calculated value : " << QuesA(n);
    }

    //Question B
    cout << "\n\nQuestion B - Armstrong Number Checker" << endl;
    cout << "Enter a positive integer : ";
    cin >> num;
    if (cin.fail())
    {
        cout << "ERROR - Your input is not valid. \n";
        return 0;
    }
    else
    {
        if (QuesB(num) == num)
            cout << num << " is an Armstrong number.";
        else
            cout << num << " is not an Armstrong number.";
    }
    
    //Question C
    cout << "\n\nQuestion C - XNOR Logic" << endl;
    cout << "Enter two binary numbers with same length to be checked, separated in space : ";
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "ERROR - Your input is not valid. \n";
        return 0;
    }
    else
    {
        Str_a = to_string(a);
        Str_b = to_string(b);
        if (QuesCCheck(a, b) == false)
        {
            cout << "ERROR - Invalid input ; Your input is not two same equal length binary numbers";
        }
        else if (QuesCCheck(a, b) == true)
        {
            cout << Str_a << " XNOR " << Str_b << " in decimal : " << QuesC(a, b);
        }
    }

    //Question D
    cout << "\n\nQuestion D - Reversing Number" << endl;
    cout << "Enter a positive integer you want to inverse : ";
    cin >> d;
    if (cin.fail())
    {
        cout << "ERROR - Your input is not valid. \n";
        return 0;
    }
    else
    {
        cout << "Your inverse : ";
        QuesD(d);
        cout << "\n";
    }

    return 0;
}

int QuesAFac(int a)
{
    int res(1);
    for (int i = 2; i <= a; i++)
    {
        res = res * i;
    }
    return (res);
}
double QuesA(int n)
{
    double p(0);
    for (int i = 1; i <= n; i++)
    {
        p = (double)p + pow(-1, i - 1) / QuesAFac(i);
    }
    return (p);
}
int QuesBPower(int b)
{
    int Count = 0;
    while (b != 0)
    {
        b = b / 10;
        Count++;
    }
    return (Count);
}
int QuesB(int num)
{
    int Result(0);
    static int Power = QuesBPower(num);

    if (num == 0)
    {
        return (0);
    }
    else if (num)
    {
        Result = QuesB(num / 10) + pow(num % 10, Power);
    }

    return (Result);
}
bool QuesCCheck(int a, int b)
{
    int countA(0), countB(0), Digit_a, Digit_b;
    while (a > 0)
    {
        countA++;
        Digit_a = a % 10;
        a = a / 10;
        if (Digit_a != 1 && Digit_a != 0)
        {
            return(false);
        }
    }
    while (b > 0)
    {
        countB++;
        Digit_b = b % 10;
        b = b / 10;
        if (Digit_b != 1 && Digit_b != 0)
        {
            return(false);
        }
    }

    if (countB != countA)
    {
        return(false);
    }

    else
    {
        return (true);
    }
}
int QuesC(int a, int b)
{
    int i, j, n(0), Op_Integer(0);

    while (a > 0)
    {
        while (b > 0)
        {
            i = a % 10;
            j = b % 10;
            if (i == j)
            {
                Op_Integer = Op_Integer + pow(2, n);
            }
            a = (int)a / 10;
            b = (int)b / 10;
            n++;
        }
    }

    return(Op_Integer);
}
void QuesD(int d)
{
    if (d == 0)
        return;
    else
    {
        cout << d % 10;
        QuesD(d / 10);
    }
}