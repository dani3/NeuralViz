#include <Morpho/Node.h>

namespace NeuralViz {
    Node::Node(int sample, Type type, Vec3<float> origin, float radius, int parent)
        : m_SampleId(sample), m_Type(type), m_Origin(origin), m_Radius(radius), m_Parent(parent) {}

    Node::~Node() {}
}
