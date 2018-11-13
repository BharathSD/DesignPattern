#include <iostream>
#include "Neuron.h"
#include "NeuronLayer.h"

int main()
{
    Neuron n1, n2;
    NeuronLayer layer1{2}, layer2{3};


//    n1.connect_to(n2); // Scenario-1 : Neuron to neuron connection
//    n1.connect_to(layer1); // Scenario-2 : neuron to layer connection
//    layer1.connect_to(n2); // Scenario-3 : layer to neuron connection
    layer1.connect_to(layer2); // Scenario-4 : layer to layer connection

    std::cout << layer2 << std::endl;
    return 0;
}