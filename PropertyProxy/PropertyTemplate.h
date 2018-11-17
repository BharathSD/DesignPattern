#ifndef PROPERTYPROXY_PROPERTYTEMPLATE_H
#define PROPERTYPROXY_PROPERTYTEMPLATE_H

#include <ostream>

template <typename T>
class Property {
public:
    T value;

    explicit Property(T value)
    {
        *this = value;
    }

    T operator=(T new_value)
    {
        return value = new_value;
    }

    operator T()
    {
        return value;
    }

    friend std::ostream &operator<<(std::ostream &os, const Property &aProperty) {
        os << "value: " << aProperty.value;
        return os;
    }
};


#endif //PROPERTYPROXY_PROPERTYTEMPLATE_H
