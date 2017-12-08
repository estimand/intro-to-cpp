#include <iostream>

using namespace std;

class Vector3D {
    double x, y, z;
    public:
        Vector3D();
        Vector3D(double, double, double);
        Vector3D operator+(const Vector3D& other);
        Vector3D operator*(const Vector3D& other);
        friend ostream& operator<<(ostream& stream, const Vector3D& Vector3D);
};

Vector3D::Vector3D() : x(0), y(0), z(0)
{
}

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z)
{
}

Vector3D Vector3D::operator+(const Vector3D& other)
{
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator*(const Vector3D& other)
{
    return Vector3D(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

ostream& operator<<(ostream& stream, const Vector3D& vector)
{
    stream << "(x=" << vector.x << ", y=" << vector.y << ", z=" << vector.z << ")";
    return stream;
}

int main()
{
    Vector3D v1 = Vector3D(2, 1, -1);
    Vector3D v2 = Vector3D(-3, 4, 1);

    cout << "v1:      " << v1 << endl;
    cout << "v2:      " << v2 << endl;

    cout << "v1 + v2: " << v1 + v2 << endl;

    cout << "v1 * v2: " << v1 * v2 << endl;
    cout << "v2 * v1: " << v2 * v1 << endl;

    return 0;
}

