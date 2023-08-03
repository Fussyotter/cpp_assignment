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
    // references and pointers took up majority of this time for me, I had to look up how to do this. 
    // however once references and pointers clicked a little bit it made many things clear
    xyzVector distance(const xyzVector& vec) const {
        return xyzVector(vec._x - _x, vec._y - _y, vec._z - _z);
    }
    // friend function to overload the << operator, this was the main trouble for me
    // required a lot of psuedo code and trial and error to get this to work
    friend std::ostream& operator<<(std::ostream& os, const xyzVector& vec) {
        os << "[" << vec._x << ", " << vec._y << ", " << vec._z << "]";
        return os;
    }

private:
    Value _x, _y, _z;
};

int main() {
    xyzVector<double> v1 = {0, 0, 0};
    // xyzVector<double> v1 = {4,18,12};
   xyzVector<double> v2 = {2, 2, 2};
    // xyzVector<double> v2 = {3,8,102};
    xyzVector<double> v3 = v2 - v1;
    v3 = v3.normalize(); // compute the unit vector
    xyzVector<double> v4 = v3.distance(v2); // compute the cartesian difference
    std::cout << v4 << std::endl; // should print out [x, y, z] where _x,_y,_z are the values inside v4;
    return 0;
}
 
