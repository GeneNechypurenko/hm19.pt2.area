#include "Triangle.h"

Triangle::Triangle(double base, double height)
    :
    shape("Triangle"),
    base(base),
    height(height)
{}

double Triangle::area() const
{
    return 0.5 * base * height;
}

void Triangle::printArea() const
{
    cout <<
        "Area of " << shape <<
        " with base A (" << base <<
        "), and height C (" << height <<
        ") = " << area() << endl;
    cout << "----------------------------------------------------------" << endl;
}