#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
  private: 
    double width;
    double length;
  public:
    Rectangle(double, double); //constructor
    void setWidth(double);
    void setLength(double);

    double getWidth() const
      { return width; } //returning private variable width

    double getLength() const
      { return length; } //returning private variable length

    double getArea() const
      { return width * length; } //Manipulating private varianbles and returning result
};
#endif