#include <iostream>
#include <cmath>
template <typename T>
class xyzVector {
public:
    typedef T Value;
    xyzVector() : _x(0), _y(0), _z(0) {}
    xyzVector(Value x, Value y, Value z) : _x(x), _y(y), _z(z) {}



    xyzVector operator-(const xyzVector& vec) const {
        return xyzVector(_x - vec._x, _y - vec._y, _z - vec._z);
    }

    xyzVector normalize() const {
        Value mag = sqrt(_x*_x + _y*_y + _z*_z);
        return xyzVector(_x/mag, _y/mag, _z/mag);
    }



private:
    Value _x, _y, _z;
};

int main() {
    xyzVector<double> v1 = {0, 0, 0};
    xyzVector<double> v2 = {2, 2, 2};
    xyzVector<double> v3 = v2 - v1;
    v3 = v3.normalize(); // compute the unit vector
    xyzVector<double> v4 = v3.distance(v2); // compute the cartesian difference
    std::cout << v4 << std::endl; // should print out [x, y, z] where _x,_y,_z are the values inside v4;
    return 0;
}
 



/*

                xyzVector<double> v1 = {0, 0, 0};

                xyzVector<double> v2 = {2, 2, 2};

                xyzVector<double> v3 = v2  - v1;

                v3  = v3.norm(); // compute the unit vector

                xyzVector<double> v4 = v3.distance(v2); // compute the cartesian difference

                std::cout << v4 << std::endl; // should print out [x, y, z] where _x,_y,_z are the values inside v4;

                return 0;

               

*/