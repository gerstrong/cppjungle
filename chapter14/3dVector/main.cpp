#include <iostream>
#include <cassert>
#include <vector>

struct Vec2D {
    Vec2D operator+(const Vec2D other)
    {
        Vec2D res;
        res.x = this->x + other.x;
        res.y = this->y + other.y;
        return res;
    }

    int x = 0;	int y = 0;
};

// Zu 1.
struct Vec3D {
    Vec3D operator+(const Vec3D &other)
    {
        Vec3D res;
        res.x = this->x + other.x;
        res.y = this->y + other.y;
        res.z = this->z + other.z;
        return res;
    }

    // Zu 2.
    int& operator[](const int idx)
    {
        assert(idx>=0 && idx < 3);

        if(idx==0) return this->x;
        if(idx==1) return this->y;
        if(idx==2) return this->z;

        return this->x; // Hier sollten wir nie hinkommen!
    }

    int x = 0;	int y = 0;	int z = 0;
};

// Zu 3.
struct Vec {
    Vec operator+(const Vec &other) const // Const Specifier: Geben wir es an, kann mit read-only Instanzen die Methode aufgerufen werden.
    {
        assert(mData.size() && other.mData.size());

        Vec res;
        const auto numElem = mData.size();
        res.mData.resize(numElem);

        for(auto idx=0 ; idx < numElem ; idx++)
        {
            res.mData[idx] = this->mData[idx] + other.mData[idx];
        }

        return res;
    }

    int& operator[](const int idx)
    {
        return mData[idx];
    }

    std::vector<int> mData;
};


int main() {

    Vec3D vec1, vec2, vec3;

    vec1[0] = 2;
    vec1[1] = 2;
    vec1[2] = 3;

    vec2[0] = 2;
    vec2[1] = 2;
    vec2[2] = 3;

    vec3 = vec1 + vec2;

    // ...

    return 0;
}
