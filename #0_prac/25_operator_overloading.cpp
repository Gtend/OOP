// #include <iostream>
//
// // member func
// class Vector {
// public:
//     Vector(): x_(0.0), y_(0.0) {}
//     Vector(double x, double y): x_(x), y_(y) {}
//     double x() const { return x_; }
//     double y() const { return y_; }
//
//     // T operator@(const T&)
//    Vector operator+(const Vector &v) {
//         return Vector(x()+v.x(), y()+v.y());
//     }
//     double operator*(const Vector &v) {
//         return x_*v.x()+y_*v.y();
//     }
//
// private:
//     double x_;
//     double y_;
// };
//
// int main() {
//     Vector u(1.0, 2.0);
//     Vector v(u);
//     Vector w;
//     w = u + v; // w = u.operator+(v); same
//     double c = u * v;
//
//     std::cout << w.x() << w.y() << std::endl;
//     std::cout << "c = " << c << std::endl;
//
// }