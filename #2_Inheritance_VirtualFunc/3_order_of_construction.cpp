// #include <iostream>
// #include <string>
// #include <vector>
//
// class Base {
// public:
//     Base(int n) : vector_(n) {
//         std::cout << "Base constructor" << std::endl;
//     };
//     Base() {
//         std::cout << "Base constructor" << std::endl;
//     };
// private:
//     std::vector<char> vector_;
// };
//
// class Base2 {
// public:
//     Base2() {
//         std::cout << "Base2 constructor" << std::endl;
//     };
// };
//
// class Derived : public Base, public Base2 {
// public:
//     Derived(const std::string& str) : Base(512), str_(str) {
//         std::cout << "Derived constructor" << std::endl;
//         i = 0;
//     }
//     Derived() {
//         std::cout << "Derived constructor" << std::endl;
//     }
// private:
//     std::string str_;
//     int i = 0;
// };
//
// int main() {
//     Derived derived("helloworld");
//     Derived derived2;
//
// }
//
//
