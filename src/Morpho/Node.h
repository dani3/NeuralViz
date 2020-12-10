#pragma once

#include <Utils/Vec3.h>

namespace NeuralViz {
    class Node {
    public:
        enum class Type {
            UNDEFINED = 0,
            SOMA,
            AXON,
            BASAL_DENTRITE,
            APICAL_DENDRITE,
            CUSTOM
        };

        Node(int sample, Type type, Vec3<float> origin, float radius, int parent);
        virtual ~Node();

    private:
        int mSampleId;
        Type mType;
        Vec3<float> mOrigin;
        float mRadius;
        int mParent;
    };
}
