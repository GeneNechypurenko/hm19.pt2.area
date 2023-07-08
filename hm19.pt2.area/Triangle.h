#pragma once

#include "IShape.h"

class Triangle : public IShape
{
private:
    string shape;
    double base;
    double height;

public:
    Triangle(double base, double height);
    double area() const override;
    void printArea() const override;
};