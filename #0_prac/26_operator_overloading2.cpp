// #include <iostream>
// // nonmember func
// class Vector {
// public:
//     Vector(): x_(0.0), y_(0.0) {}
//     Vector(double x, double y): x_(x), y_(y) {}
//     double x() const { return x_; }
//     double y() const { return y_; }
// private:
//     double x_;
//     double y_;
// };
//
// Vector operator+(const Vector& u, const Vector& v) {
//     return Vector(u.x() + v.x(), u.y()+v.y());
// }
// double operator*(const Vector& u, const Vector& v) {
//     return u.x()* v.x()+u.y() * v.y();
// }
//
// int main() {
//     Vector u(1.0, 2.0);
//     Vector v(u);
//     Vector w;
//     w = u + v;
//     double c = u * v;
//     std::cout << w.x() << w.y() << std::endl;
//     std::cout << "c = " << c << std::endl;
//
// }