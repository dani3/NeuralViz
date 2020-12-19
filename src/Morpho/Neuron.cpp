#include <Morpho/Neuron.h>

namespace NeuralViz {
    Neuron::Neuron() {
        m_Nodes = std::make_shared<std::vector<Node>>();
    }

    Neuron::~Neuron() {}

    void Neuron::Push(const Node& node) {
        m_Nodes->push_back(node);
    }

    NeuronIterator::NeuronIterator(const std::shared_ptr<std::vector<Node>> elements, int index)
        : m_Elements(elements), m_Index(index) {}

    NeuronIterator& NeuronIterator::operator++() {
        m_Index++;
        return *this;
    }

    NeuronIterator NeuronIterator::operator++(int) {
        NeuronIterator iterator = NeuronIterator(m_Elements, m_Index);
        m_Index++;
        return iterator;
    }

    NeuronIterator& NeuronIterator::operator--() {
        m_Index--;
        return *this;
    }

    NeuronIterator NeuronIterator::operator--(int) {
        NeuronIterator iterator = NeuronIterator(m_Elements, m_Index);
        m_Index--;
        return iterator;
    }

    const Node& NeuronIterator::operator*() const {
        return m_Elements->at(m_Index);
    }

    bool NeuronIterator::operator!=(const NeuronIterator& other) const {
        return this->m_Index != other.m_Index;
    }

    bool NeuronIterator::operator==(const NeuronIterator& other) const {
        return this->m_Index == other.m_Index;
    }
}
