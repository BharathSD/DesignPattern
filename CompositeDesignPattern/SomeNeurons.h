#ifndef COMPOSITEDESIGNPATTERN_SOMENEURONS_H
#define COMPOSITEDESIGNPATTERN_SOMENEURONS_H

// CRTP- Curriously Recurring Template pattern
template <typename self>
class SomeNeurons
{
public:
    template <typename T>
    void connect_to(T& other)
    {
        for(Neuron& from : *static_cast<self*>(this))
        {
            for(Neuron& to : other)
            {
                from.out.push_back(&to);
                to.in.push_back(&from);
            }
        }
    }
};
#endif //COMPOSITEDESIGNPATTERN_SOMENEURONS_H
