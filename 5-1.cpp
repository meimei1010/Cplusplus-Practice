#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int integer;
    int numberOfDigits = 0;
    int digit = 0;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> integer;
    cout << endl;

    integer = abs ( integer );         

    int copyInteger = integer;              

    do
    {
        numberOfDigits ++;

        copyInteger /= 10;
    }
    while ( copyInteger != 0 );

    int divisor = pow ( 10 , numberOfDigits - 1 );

    do
    {
        digit = integer / divisor;                  

        integer = integer - ( digit * divisor );    

        cout << digit << ' ';

        sum += digit;

        divisor /= 10;                              
    }
    while ( divisor > 0 );

    cout << "\nSum = " << sum << endl;

    return 0;
}
