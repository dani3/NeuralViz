#pragma once

namespace NeuralViz {
    template <typename T>
    class Vec3 {
    public:
        Vec3(T x, T y, T z)
            : mX(x), mY(y), mZ(z) {}

        virtual ~Vec3() {}

        inline const T getX() const { return mX; }
        inline const T getY() const { return mY; }
        inline const T getZ() const { return mZ; }

    private:
        T mX, mY, mZ;
    };
}
