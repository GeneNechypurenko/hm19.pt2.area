#pragma once

#include "IShape.h"

class Trapezoid : public IShape
{
private:
    string shape;
    double topLength;
    double bottomLength;
    double height;
public:
    Trapezoid(double topLength, double bottomLength, double height);
    double area() const override;
    void printArea() const override;
};