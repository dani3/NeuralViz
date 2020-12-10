#pragma once

#include <Core/Core.h>
#include <Morpho/Neuron.h>

#include <string>

namespace NeuralViz {
    class SwcReader {
    public:
        static std::unique_ptr<Neuron> Parse(const std::string& path);
    };
}
