#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  double weightKG, weightLBS;

cout << "Please enter your weight in Kilograms: " << endl;
cin >> weightKG;
cout << endl;

cout << fixed << showpoint << setprecision(2);

weightLBS = weightKG * 2.2;

cout << "Your weight in pounds is: " << weightLBS << endl;
    // Write your main here
    return 0;
}
