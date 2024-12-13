// #include <iostream>
//
// template <typename FirstType, typename SecondType>
// //std::decltype(t1+t2) AddArbitary(FirstType t1, SecondType t2) {
// auto AddArbitary(FirstType t1, SecondType t2) -> decltype(t1 + t2) {
//     return t1 + t2;
// }
//
// int main() {
//     std::cout << AddArbitary(10.0, 'A') << std::endl;
//     std::string s1 = "Code";
//     std::cout << AddArbitary(s1, 'B') << std::endl;
//     std::cout << AddArbitary(s1, 'C') << std::endl;
//     std::cout << AddArbitary(s1, 'D') << std::endl;
// }