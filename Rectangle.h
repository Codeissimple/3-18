class Rectangle
{
  private:
    double width;
    double length;
  public:
    void setWidth(double);
    void setLength(double);
    double getWidth(double);
    double getLength(double);
    double getArea() const;
};