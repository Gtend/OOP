// #include <iostream>
// #include <string>
// #include <algorithm>
//
// template<typename T>
// double min_value(T x) {
//     return x;
// }
//
// template<typename T, typename... Args>
// double min_value(T x, Args... args) {
//     return x < min_value(args...) ? x : min_value(args...);
// }
//
// int main() {
//     auto x = min_value(42,3.14,11.1f,-2);
//     std::cout << x << std::endl;
// }