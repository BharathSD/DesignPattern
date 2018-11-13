#include "Neuron.h"

Neuron::Neuron()
{
    unsigned static int id{1};
    this->id = id++;
}

std::ostream &operator<<(std::ostream &os, const Neuron &obj)
{
    // Indicate Input to output connections
    for(Neuron* n : obj.in)
    {
        os << n->id << "\t-->\t[" << obj.id << "]" << std::endl;
    }

    // Indicate Output to input connections
    for(Neuron* n : obj.out)
    {
        os << "[" << obj.id << "]\t-->\t" << n->id << std::endl;
    }
    return os;
}

Neuron *Neuron::begin() {
    return this;
}

Neuron *Neuron::end() {
    return this+1;
}
