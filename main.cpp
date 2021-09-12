#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include<memory>
using namespace std;

int main() {
  double number;                  //Holding number here
  double totalArea;               //Holding area here
  

  unique_ptr<Rectangle> kitchen(new Rectangle);
  unique_ptr<Rectangle> bedroom(new Rectangle);
  unique_ptr<Rectangle> den(new Rectangle);

/*
  Rectangle *kitchen = nullptr;   //Pointer to kitchent's dimensions
  Rectangle *bedroom = nullptr;   //Pointer to bedroom's dimensions
  Rectangle *den = nullptr;       //Pointer to den's dimensions

  kitchen = new Rectangle(number, number); //Why do I have to provide arguments?
  bedroom = new Rectangle(number, number); //Why do I have to provide arguments?
  den = new Rectangle(number, number);     //Why do I have to provide arguments?
*/
  cout << "What is the kitchen's length?\n";
  cin >> number;                            //Get lenght
  kitchen->setLength(number);       //Storing lenght in the kitchen's object
  cout << "What is the kitchen's width?\n";  
  cin >> number;                            //Get width
  kitchen->setWidth(number);                //Storing width in the kitchen's object

  cout << "What is the bedroom's length?\n";
  cin >> number;                            //Get lenght
  bedroom->setLength(number);       //Storing lenght in the bedroom's object
  cout << "What is the bedroom's width?\n";  
  cin >> number;                            //Get width
  bedroom->setWidth(number);                //Storing width in the bedroom's object

  cout << "What is the den's length?\n";
  cin >> number;                            //Get lenght
  den->setLength(number);       //Storing lenght in the den's object
  cout << "What is the den's width?\n";  
  cin >> number;                            //Get width
  den->setWidth(number);                //Storing width in the den's object

  // Calculating the total area of three rooms

  totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

  //Displaying the total are fo the three rooms

  cout << "The total area of the three rooms is "
      << totalArea <<endl;

  //Deleting objects from the memory
/*
  delete kitchen;
  delete bedroom;
  delete den;

*/
  kitchen = nullptr;
  bedroom = nullptr;
  den = nullptr;

  return 0;
}