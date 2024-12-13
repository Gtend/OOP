// #include <iostream>
//
// class Animal {
// public:
//     Animal() {
//         numberOfLeg = 4;
//     }
//     Animal(int numberOfLeg) {
//         this->numberOfLeg = numberOfLeg;
//     }
//     // copy constructer
//     // T(const T&) T is class
//     Animal(const Animal& a) {
//         numberOfLeg = a.numberOfLeg;
//     }
//     // Animal(Animal& a) {
//     //     numberOfLeg = a.numberOfLeg;
//     // }
//     int numberOfLeg;
// };
//
// int main() {
//     Animal a = 3;
//     Animal a1;
//     Animal a2(10);
//     Animal a3 = Animal(20);
//     Animal a4 = a3;
//     Animal a5(a4);
//     std::cout << a.numberOfLeg << std::endl;
//     std::cout << a1.numberOfLeg << std::endl;
//     std::cout << a2.numberOfLeg << std::endl;
//     std::cout << a3.numberOfLeg << std::endl;
//     std::cout << a4.numberOfLeg << std::endl;
//     std::cout << a5.numberOfLeg << std::endl;
//     std::cout << &a4 << std::endl;
//     std::cout << &a5 << std::endl;
// }