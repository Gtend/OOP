// #include <iostream>
//
// class A {
// public:
//     void func() {
//         std::cout << "A::func()" << std::endl;
//     };
//     int x;
// };
//
// class B {
// public:
//     void func() {
//         std::cout << "B::func()" << std::endl;
//     };
//     int xx;
// };
//
// class C : public A, public B {
// public:
// };
//
// int main() {
//     C c;
//     c.func();
//     c.x;
//     c.xx;
//     c.A::func();
//     c.B::func();
//
//     C* c_ptr = new C;
//     C* c_ptr2 = &c;
//     C* c_ptr3 = c_ptr;
//     c_ptr->A::func();
//     c_ptr->B::func();
// }