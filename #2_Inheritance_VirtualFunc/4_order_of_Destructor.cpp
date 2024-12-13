// #include <iostream>
// #include <string>
// #include <vector>
//
// class Parent1 {
// public:
//     ~Parent1() {
//         std::cout << "Parent1 Destructor" << std::endl;
//     }
// };
//
// class Parent2 {
// public:
//     ~Parent2() {
//         std::cout << "Parent2 Destructor" << std::endl;
//     }
// };
//
// class Child : public Parent1, public Parent2{
// public:
//     ~Child() {
//         std::cout << "Child Destructor" << std::endl;
//     }
// };
//
// class A {
// public:
//     A() {
//         std::cout << "A Const" << std::endl;
//     }
//     ~A() {
//         std::cout << "A Destructor" << std::endl;
//     }
// };
// class B : public A {
// public:
//     B() {
//         std::cout << "B Const" << std::endl;
//     }
//     ~B() {
//         std::cout << "B Destructor" << std::endl;
//     }
// };
// class C : public B {
// public:
//     C() {
//         std::cout << "C Const" << std::endl;
//     }
//     ~C() {
//         std::cout << "C Destructor" << std::endl;
//     }
// };
//
// int main() {
//     Child child;
//     C c;
// }
//
//
//
