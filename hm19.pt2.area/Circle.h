#pragma once

#include "IShape.h"

class Circle : public IShape
{
private:
    string shape;
    double radius;
    const double pi;

public:
    Circle(double radius);
    double area() const override;
    void printArea() const override;
};