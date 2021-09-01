


//Page 340 in the BOOK



//Implementation file 
# include "Rectangle.h" // needed for the Rectangle class
#include <iostream>     // Needed for cout
#include <cstdlib>      //Needed for the exit function
using namespace std;

//The constructor accespts arguments for width and length

Rectangle::Rectangle(double w, double len)
{
  width = w;
  length = len;
}

//setWidth sets the value of the member variable width

void Rectangle::setWidth(double w)
{
  if (w >=0)
    width = w;
  else
  {
    cout << "Invalid width\n";
    exit(EXIT_FAILURE);
  }
}

void Rectangle::setLength(double len)
{
  if (len >=0 )
    length = len;
  else
  {
    cout << "Invalid length\n";
    exit(EXIT_FAILURE);
  }
}
