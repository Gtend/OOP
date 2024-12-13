// #include <iostream>
// #include <string>
// #include <vector>
//
// class Base {
// public:
//     virtual void show() {
//         std::cout << "Base !" << std::endl;
//     }
// };
//
// class Derived : public Base {
// public:
//     void show() override {
//         std::cout << "Derived !" << std::endl;
//     }
// };
//
// void test(Base& base) {
//     base.show();
// }
// int main() {
//     // reference 도 upcasting 동작
//     Base base;
//     Derived derived;
//     test(base);
//     test(derived);
//     Base& baseRef = derived;
//     test(baseRef);
// }