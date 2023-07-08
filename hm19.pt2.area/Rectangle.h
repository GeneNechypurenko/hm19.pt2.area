#pragma once

#include "IShape.h"

class Rectangle : public IShape
{
private:
    string shape;
    double width;
    double height;

public:
    Rectangle(double width, double height);
    double area() const override;
    void printArea() const override;
};