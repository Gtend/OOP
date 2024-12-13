// #include <iostream>
//
// template <typename T, typename... Args>
// auto sum(T x, Args... args) {
//     // recursive
//     //return x + sum(args...);
//
//     // Sum with Fold Expression
//
//     // binary right
//     //return x + (args + ...);
//     // binary left fold expresson
//     return x + (... + args);
// }
//
// int main() {
//     auto x = sum(23, 1, 2);
//     std::cout << x << std::endl;
// }
