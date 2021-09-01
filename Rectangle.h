#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
  private: 
    double width;
    double length;
    double height;
    double volume;
  public:
    Rectangle(double, double, double); //constructor
    void setWidth(double);
    void setLength(double);
    void setHeight(double);

    double getWidth() const
      { return width; } //returning private variable width

    double getLength() const
      { return length; } //returning private variable length

    double getHeight() const
      { return height; } //Manipulating private varianbles and returning result

    double getArea() const
      { return width * length; } //Manipulating private varianbles and returning result
    double getVolume() const
      { return width * length * height; } //Manipulating private varianbles and returning result
};
#endif