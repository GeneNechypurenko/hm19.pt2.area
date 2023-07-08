#include "Circle.h"

Circle::Circle(double radius)
    :
    shape("Circle"),
    radius(radius),
    pi(3.14159)
{}

double Circle::area() const
{
    return pi * radius * radius;
}

void Circle::printArea() const
{
    cout << "Area of " << shape << " with radius (" << radius << ") = " << area() << endl;
    cout << "----------------------------------------------------------" << endl;
}