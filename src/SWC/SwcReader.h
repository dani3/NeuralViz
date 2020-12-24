#pragma once

#include <Core/Core.h>
#include <Morpho/Neuron.h>

namespace NeuralViz {
    class SwcReader {
    public:
        static std::unique_ptr<Neuron> Parse(const QString& path);
    };
}
