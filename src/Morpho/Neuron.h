#pragma once

#include <Core/Core.h>
#include <Morpho/Node.h>

namespace NeuralViz {
    class NeuronIterator {
    public:
        NeuronIterator(const std::vector<const Node*> elements, int index);
        const Node& operator*() const;
        NeuronIterator& operator++();
        NeuronIterator operator++(int);
        NeuronIterator& operator--();
        NeuronIterator operator--(int);
        bool operator!=(const NeuronIterator& other) const;
        bool operator==(const NeuronIterator& other) const;

    private:
        const std::vector<const Node*> m_Elements;
        int m_Index = -1;
    };

    class Neuron {
    public:
        using Iterator = NeuronIterator;

    public:
        Neuron();
        virtual ~Neuron();

        void Push(const Node* node);

        int Size() const { return m_Nodes.size(); }

        Iterator begin() { return Iterator(m_Nodes, 0); }
        Iterator end() { return Iterator(m_Nodes, m_Nodes.size()); }

    private:
        std::vector<const Node*> m_Nodes;
    };
}
