#ifndef PROPERTYPROXY_CREATURE_H
#define PROPERTYPROXY_CREATURE_H

#include <ostream>
#include "PropertyTemplate.h"

class Creature {
public:

    Property<int> agility{10};
    Property<int> strength{5};

    friend std::ostream &operator<<(std::ostream &os, const Creature &creature) {
        os << "agility: " << creature.agility << " strength: " << creature.strength;
        return os;
    }
};


#endif //PROPERTYPROXY_CREATURE_H
