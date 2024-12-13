// #include <iostream>
// #include <vector>
//
// class Car {
//     public:
//     virtual void echoName() = 0;
// };
//
// class Sonata : public Car {
//     public:
//     void echoName() {
//         std::cout << "Sonata::echoName" << std::endl;
//     }
// };
//
// class Malibu : public Car {
// public:
//     void echoName() {
//         std::cout << "Malibu::echoName" << std::endl;
//     }
// };
//
// class Spark : public Car {
// public:
//     void echoName() {
//         std::cout << "Spark::echoName" << std::endl;
//     }
// };
//
// int main() {
//     std::vector<Car*> carCollection;
//     carCollection.push_back(new Sonata);
//     carCollection.push_back(new Malibu);
//     carCollection.push_back(new Spark);
//
//     for(auto& car : carCollection) {
//         car->echoName();
//     }
// }