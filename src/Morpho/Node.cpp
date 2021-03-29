#include <Morpho/Node.h>

namespace NeuralViz {
    Node::Node(int sample, Type type, Vec3<float> origin, float radius, int parent)
        : m_SampleId(sample), m_Type(type), m_Origin(origin), m_Radius(radius), m_Parent(parent) {}

    Node::~Node() {}

    std::ostream& operator<<(std::ostream& os, Node c) {
        os << "Id: " << c.m_SampleId << std::endl;
        os << " - Parent of: " << c.m_Parent << std::endl;
        os << " - Located at (" << c.m_Origin.getX() << ", " << c.m_Origin.getY() << ", " << c.m_Origin.getZ() << ")" << std::endl;
        os << " - Radius: " << c.m_Radius;

        return os;
    }
}
