#pragma once

#include <Core/Core.h>

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
        int getParent() const { return m_Parent; }

    private:
        const int m_SampleId;
        const Type m_Type;
        const Vec3<float> m_Origin;
        const float m_Radius;
        const int m_Parent;
    };
}
