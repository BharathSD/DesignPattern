#ifndef COMPOSITEDESIGNPATTERN_NEURON_H
#define COMPOSITEDESIGNPATTERN_NEURON_H

#include <vector>
#include <iostream>
#include "SomeNeurons.h"
class Neuron :  public SomeNeurons<Neuron>
{
public:
    std::vector<Neuron*> in, out;
    unsigned int id;
    Neuron();
    Neuron* begin();
    Neuron* end();
    friend std::ostream &operator<<(std::ostream &os, const Neuron &neuron);
};


#endif //COMPOSITEDESIGNPATTERN_NEURON_H
