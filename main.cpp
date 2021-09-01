#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main() {
  double number; 
  double totalArea;
  Rectangle *kitchen = nullptr;
  Rectangle *bedroom = nullptr;
  Rectangle *den = nullptr;

  kitchen = new Rectangle;
  bedroom = new Rectangle;
  den = new Rectangle;

  cout << "What is the kitchen's length?";
  cin >> number;
  cout << "What is the kitchen's height?";
  cin >> number;
  kitchen->setWidth(number);

  cout << "What is the bedroom's length?";
  cin >> number;
  cout << "What is the bedroom's height?";
  cin >> number;
  bedroom->setWidth(number);

  cout << "What is the den's length?";
  cin >> number;
  cout << "What is the den's height?";
  cin >> number;
  den->setWidth(number);

  totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

  cout << "The total area of the three rooms is "
      << totalArea <<endl;

  delete kitchen;
  delete bedroom;
  delete den;
  kitchen = nullptr;
  bedroom = nullptr;
  den = nullptr;

  return 0;
}