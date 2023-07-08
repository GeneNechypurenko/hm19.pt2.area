#pragma once
#include <iostream>
#include <string>

using namespace std;

class IShape
{
public:
    virtual ~IShape() {}
    virtual double area() const = 0;
    virtual void printArea() const = 0;
};