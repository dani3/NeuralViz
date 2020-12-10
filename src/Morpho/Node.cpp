#include <Morpho/Node.h>

namespace NeuralViz {
    Node::Node(int sample, Type type, Vec3<float> origin, float radius, int parent)
        : mSampleId(sample), mType(type), mOrigin(origin), mRadius(radius), mParent(parent) {}

    Node::~Node() {}
}
