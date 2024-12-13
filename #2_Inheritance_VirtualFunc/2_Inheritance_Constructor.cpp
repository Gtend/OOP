// #include <iostream>
// #include <string>
// #include <vector>
//
// // by default, constructors are not inherited
// // using statement to inherite
// class Base {
// public:
//     Base() : x(0), y(0), z(0) {
//         std::cout << "Base Default constructor" << std::endl;
//     }
//     Base(int x, int y, int z) : x(x), y(y), z(z) {
//         std::cout << "Base constructor with 3" << std::endl;
//     }
// private:
//     int x, y, z;
// };
//
// class Derived : public Base {
// public:
//     // Base 클래스이 모든 생성자 상속받음 == using !!
//     using Base::Base;
//     Derived(int x, int y, int z) : Base(x, y, z) {
//         std::cout << "Derived constructor" << std::endl;
//     }
// };
//
// int main() {
//     Derived derived1;
//     Derived* derived2 = new Derived();
//     Derived* derived4(new Derived());
//     Derived derived3(1,2,3);
// }
//
//
