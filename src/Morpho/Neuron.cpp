#include <Morpho/Neuron.h>

namespace NeuralViz {
    Neuron::Neuron() {
        mNodes = std::make_unique<std::vector<Node>>();
    }

    Neuron::~Neuron() {}

    void Neuron::Push(const Node& node) {
        mNodes->push_back(node);
    }
}
