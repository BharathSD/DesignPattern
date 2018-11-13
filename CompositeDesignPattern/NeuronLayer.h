#ifndef COMPOSITEDESIGNPATTERN_NEURONLAYER_H
#define COMPOSITEDESIGNPATTERN_NEURONLAYER_H

#include <vector>
#include <ostream>
#include "Neuron.h"
#include "SomeNeurons.h"

// Never inherit from stl::vectors, since it does not have virtual destructors
class NeuronLayer : public std::vector<Neuron>, public SomeNeurons<NeuronLayer>
{
public:
    NeuronLayer(int noOfNeurons);

    friend std::ostream &operator<<(std::ostream &os, const NeuronLayer &layer);
};


#endif //COMPOSITEDESIGNPATTERN_NEURONLAYER_H
