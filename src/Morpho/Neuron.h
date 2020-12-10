#pragma once

#include <Core/Core.h>
#include <Morpho/Node.h>

namespace NeuralViz {
    class Neuron {
    public:
        Neuron();
        ~Neuron();

        void Push(const Node& node);

    private:
        std::unique_ptr<std::vector<Node>> mNodes;
    };
}
