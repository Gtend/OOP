// #include <inttypes.h>
// #include <iostream>
//
// template <int num>
// struct Factorial {
//     // static const == 컴파일 타임 상수
//     static const int res = Factorial<num-1>::res* num;
// };
//
// template <>
// struct Factorial<0> {
//     static const int res = 1;
// };
//
// template <int num>
// struct Foo {
//     int operator() () {
//         return num;
//     }
// };
//
// int main() {
//     // 탬플릿 매개변수는 컴파일타임에 결정가능한 상수값이어야함
//     // Factorial(11)은 런타임에 결정..
//     Foo<Factorial<11>::res> foo;
//     std::cout << foo();
// }