// #include <iostream>
//
// class Vector_2 {
// public:
//     // data member
//     double x;
//     double y;
//     void declaration(double newx, double newy);
//     void initialize(double newX, double newY) {
//         // data member 접근
//         x = newX;
//         y = newY;
//     }
// };
//
// // function member 접근 :: keyword
// void Vector_2::declaration(double newx, double newy) {
//     x = newx;
//     y = newy;
// }
//
// class Point_2 {
//     public:
//     // type member :
//     // type define : using T = type : T를 ~형으로 사용
//     using Coordinate = double;
//     Coordinate x;
//     Coordinate y;
//     Point_2() : x(5.5), y(6.6) {};
//
// };
//
// int main() {
//     Vector_2 v;
//     v.x = 1.0;
//     v.y = 2.0;
//     std::cout << v.x << std::endl;
//
//     v.declaration(3.0, 4.0);
//     std::cout << v.x << std::endl;
//
//     Point_2 p;
//     std::cout << p.x << std::endl;
//
//     Point_2::Coordinate x = p.x; // 같음 double x = p.x
//     std::cout << x << std::endl;
//     return 0;
// }
