#include "NeuronLayer.h"

NeuronLayer::NeuronLayer(int noOfNeurons)
{
    while(noOfNeurons --> 0)
    {
        emplace_back(Neuron{});
    }
}

std::ostream &operator<<(std::ostream &os, const NeuronLayer &obj) {
   for (auto& neuron : obj)
       os << neuron;
    return os;
}
