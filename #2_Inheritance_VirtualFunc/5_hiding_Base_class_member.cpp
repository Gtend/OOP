// #include <iostream>
// #include <string>
// #include <vector>
//
// class Base {
//     std::string s;
// public:
//     Base() : s("Base") {
//         std::cout << "Base Construtor" << std::endl;
//     }
//     void what() {
//         std::cout << s << std::endl;
//     }
//     int x = 10;
// };
//
// class Derived : public Base {
//     std::string s;
// public:
//     Derived() : s("Derived"), Base() {
//         std::cout << "Derived Construtor" << std::endl;
//     }
//
//     void what() {
//         std::cout << s << std::endl;
//
//     }
//     int xx =100;
// };
//
// int main() {
//     Base b;
//     b.what();
//     std::cout << b.x << std::endl;
//     Derived d;
//     d.what();
//     std::cout << d.x << std::endl;
//     std::cout << d.xx << std::endl;
// }