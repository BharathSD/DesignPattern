# DesignPattern
Design Patterns
# Specification Design Pattern
In this example, A filtering operation is explained.
Here there are Products which is to be filtered according to the choice, In this example it can be filtered either by color or by size.
This also helps us bind to one of important design principles, which is the "open closed principle",according to which the design should be open for extension but closed for modification.

# Builder Design Pattern

In this example we take a HTML code builder, which has a fluent interface to build the HTML data.

# Composite Design Pattern
In this example, we see an example of Neural network connection's.
First we define a Neuron class which would be identified by it's unique ID. And a Neuron Layer is defined as a collection of Neurons.
In this example we have inherited from a STL vector class. It is not a good idea to inherit from a stl vector, since it does not have virtual destructor. But it is compromised here to just use it as an example.
We end up with 4 below connection scenarios:
* Neuron to neuron
* Neuron to layer
* layer to neuron
* layer to layer

We have defined a common interface connect_to, which would be one code to suffice the above scenarios, in this we have used the coolness of CRTP (Curiously Recurring template pattern) which is basically used to deduce the type of the class(either Neuron or Neuron layer).
