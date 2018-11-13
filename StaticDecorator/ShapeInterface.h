#ifndef STATICDECORATOR_SHAPEINTERFACE_H
#define STATICDECORATOR_SHAPEINTERFACE_H

#include <string>
using namespace std;

struct IShape
{
    virtual string str() const = 0;
};
#endif //STATICDECORATOR_SHAPEINTERFACE_H
