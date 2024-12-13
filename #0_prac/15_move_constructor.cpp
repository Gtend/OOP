// #include <iostream>
//
// class Animal {
// public:
//     Animal() {
//         numberOfLeg = 4;
//     }
//     Animal(int leg) {
//         numberOfLeg = leg;
//     }
//     // T(T&&)
//     Animal(const Animal&& a) {
//         this->numberOfLeg = a.numberOfLeg;
//     }
//
//     int numberOfLeg;
// };
//
// int main() {
//     Animal a;
//     Animal test(std::move(a));
//     // std::move(a) => rvalue
//     Animal b(std::move(a));
//     Animal c = std::move(a);
//     Animal d = Animal(std::move(c));
//     std::cout << a.numberOfLeg << std::endl;
//     std::cout << b.numberOfLeg << std::endl;
//     std::cout << c.numberOfLeg << std::endl;
//     std::cout << d.numberOfLeg << std::endl;
//
//
// }