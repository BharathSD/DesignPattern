//
// Created by asus on 11/13/2018.
//

#include "Shape.h"

Circle::Circle(float radius) : radius(radius) {}

Circle::Circle() = default;

string Circle::str() const {
    ostringstream oss;
    oss << " Circle of radius " << radius;
    return oss.str();
}

void Circle::resize(float factor) {
    radius *= factor;
}

Square::Square(float side) : side(side) {}

Square::Square() = default;

string Square::str() const {
    ostringstream oss;
    oss << " square of side " << side;
    return oss.str();
}
