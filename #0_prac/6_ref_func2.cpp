// #include <iostream>
//
// class A {
//     int x;
//     public:
//     A(int c) : x(c) {}
//
//     int& return_ref_x() {return x;}
//     int return_x() {return x;}
//     void status_x() {std::cout << x << std::endl;}
// };
//
// int main() {
//     A a(5);
//     a.status_x();
//
//     int &c = a.return_ref_x();
//     c = 2;
//     a.status_x();
//
//     int d = a.return_ref_x();
//     d = 1;
//     a.status_x();
//
//     //int &err = a.return_x(); <- 에러
//     const int &err = a.return_x(); // const 키워드 붙혀야함. rvalue니까
//     //err = 2;
//     a.status_x();
//     //
//
//     int f = a.return_x();
//     f = 1;
//     a.status_x();
//
// }