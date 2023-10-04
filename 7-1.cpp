#include <iostream>

using namespace std;

enum TriangleType {scalene, isosceles, equilateral, noTriangle};
const char* enumToString[4] = {"scalene", "isosceles", "equilateral", "noTriangle"};

TriangleType triangleShape(int side1, int side2, int side3){
  if (side1 + side2 <= side3 
      or side1 + side3 <= side2 
      or side2 + side3 <= side1){
    return noTriangle;
  }
  if(side1==side2 && side2==side3){
    return equilateral;
  }
  else if(side1==side2 || side1==side3 || side2==side3){
    return isosceles;
  }
  else{
    return scalene;
  }
}

int main(){
  int a, b, c;

  cin>> a >> b >> c;
  cout<< enumToString[triangleShape(a, b, c)];
  return 0;
}

