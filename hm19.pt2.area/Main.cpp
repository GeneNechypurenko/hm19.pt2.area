#include <iostream>
#include <string>

#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezoid.h"

#define SIZE 4

using namespace std;

int main()
{
    IShape* iShape[SIZE];
    iShape[0] = new Rectangle(4, 5);
    iShape[1] = new Circle(3);
    iShape[2] = new Triangle(4, 3);
    iShape[3] = new Trapezoid(2, 5, 3);
    
    for (int i = 0; i < SIZE; i++)
        iShape[i]->printArea();

    for (int i = 0; i < SIZE; i++)
        delete iShape[i];

    return 0;
}
