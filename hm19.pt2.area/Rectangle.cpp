#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
    :
    shape("Rectangle"),
    width(width),
    height(height)
{}

double Rectangle::area() const
{
    return width * height;
}

void Rectangle::printArea() const
{
    cout <<
        "Area of " << shape <<
        " with side A (" << width <<
        "), and side B (" << height <<
        ") = " << area() << endl;
    cout << "----------------------------------------------------------" << endl;
}