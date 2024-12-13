// #include <iostream>
//
// template <typename T>
// void printArgs(T arg) {
//     std::cout << arg << std::endl;
// }
//
// template <typename T, typename... Args>
// void printArgs(T arg, Args... args) {
//     std::cout << arg << ", ";
//     printArgs(args...);
// }
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
// int main() {
//     printArgs(1, "hello", 3, 3, 3);
//     printArgs(2, "world");
//
//     auto x = sum(23, 1, 2);
//     //auto y = sum("sdf"s, "sdfsd");
//     std::cout << x << std::endl;
//     //std::cout << y << std::endl;
// }
