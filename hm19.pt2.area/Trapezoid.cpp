#include "Trapezoid.h"

Trapezoid::Trapezoid(double topLength, double bottomLength, double height)
    :
    shape("Trapezoid"),
    topLength(topLength),
    bottomLength(bottomLength),
    height(height)
{}

double Trapezoid::area() const
{
    return 0.5 * (topLength + bottomLength) * height;
}

void Trapezoid::printArea() const
{
    cout <<
        "Area of " << shape <<
        " with side A (" << topLength <<
        "), side B (" << bottomLength <<
        "), and height C (" << height <<
        ") = " << area() << endl;
    cout << "----------------------------------------------------------" << endl;
}