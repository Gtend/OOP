// #include <inttypes.h>
// #include <iostream>
//
// int Factorial(int n) {
//     int res = 1;
//     for (int i = 1; i<=n; i++) {
//         res*=i;
//     }
//     return res;
// }
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
//     Foo<Factorial(11)> foo;
// }