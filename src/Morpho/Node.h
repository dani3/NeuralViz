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

        int getId() const { return m_SampleId; }
        Vec3<float> getOrigin() const { return m_Origin; }
        float getRadius() const { return m_Radius; }

    private:
        int m_SampleId;
        Type m_Type;
        Vec3<float> m_Origin;
        float m_Radius;
        int m_Parent;
    };
}
