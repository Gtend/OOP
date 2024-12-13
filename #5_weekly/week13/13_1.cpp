// #include <iostream>
//
// template <typename T>
// auto sum(T x) {
//     return x;
// }
//
// template <typename T, typename... Args>
// auto sum(T x, Args... args) {
//     return x + sum(args...);
// }
//
// template <typename... Args>
// auto average(Args... args) {
//     return sum(args...) / sizeof...(args);
// }
//
// int main() {
//     std::cout << average(1,2,3,4,10,10) << std::endl;
// }