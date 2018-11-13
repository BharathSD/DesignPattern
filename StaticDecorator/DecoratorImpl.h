#ifndef STATICDECORATOR_DECORATORIMPL_H
#define STATICDECORATOR_DECORATORIMPL_H

#include <type_traits>
#include "ShapeInterface.h"

template <typename T>
struct ColoredShape : T{
    static_assert(is_base_of<IShape, T>::value,
            "template argument should be of type IShape");

    string color;

    ColoredShape() {}

    // variadic templated class
    template <typename ...Args>
    ColoredShape(const string& color, Args ...args)
            :T(std::forward<Args>(args)...), color(color)
    {

    }
    string str() const override{
        ostringstream oss;
        oss << T::str() << " and has a color " << color;
        return oss.str();
    }
};


template <typename T>
struct TransperantShape : T{
    static_assert(is_base_of<IShape, T>::value,
                  "template argument should be of type IShape");

    uint8_t transperancy;

    TransperantShape() {}

    // variadic templated class
    template <typename ...Args>
    TransperantShape(const uint8_t& transperancy, Args ...args)
            :T(std::forward<Args>(args)...), transperancy(transperancy)
    {

    }
    string str() const override{
        ostringstream oss;
        oss << T::str() << " has "
            << static_cast<float >(transperancy) / 255.0f * 100.0
            << " transperancy";
        return oss.str();
    }
};

#endif //STATICDECORATOR_DECORATORIMPL_H
