#include <iostream>

using namespace std;

int main() 
{
    double number;  // Declare a variable to store the input number

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        cout << "You entered a positive number." << endl;
    } else if (number < 0) {
        cout << "You entered a negative number." << endl;
    } else {
        cout << "You entered zero." << endl;
    }

    return 0;
}
