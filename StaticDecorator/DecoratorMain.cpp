#include <iostream>
#include "DecoratorImpl.h"
#include "Shape.h"
using namespace std;
int main() {
    ColoredShape<Circle> green_circle {"green", 5.f};
    green_circle.resize(2.f);
    cout << green_circle.str() << endl;

    TransperantShape<ColoredShape<Square>> transperant_red_square{51, "red", 5.f};
    cout << transperant_red_square.str() << endl;
    return 0;
}