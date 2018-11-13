#ifndef STATICDECORATOR_SHAPE_H
#define STATICDECORATOR_SHAPE_H


#include "ShapeInterface.h"
#include <sstream>
using namespace std;

struct Circle : IShape{
    float radius;

    Circle();

    Circle(float radius);

    void resize(float factor);

    string str() const override;
};

struct Square : IShape
{
    float side;

    Square(float side);

    Square();

    string str() const override;
};

#endif //STATICDECORATOR_SHAPE_H
