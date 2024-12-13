// #include <iostream>
// #include <vector>
//
// class Car {
// public:
//     static Car* produceCar(int choice);
//     virtual void echoName() = 0;
// };
//
// class Sonata : public Car {
// public:
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
// Car* Car::produceCar(int choice) {
//     if (choice == 1) {
//         return new Sonata;
//     }else if (choice == 2) {
//         return new Malibu;
//     }else return new Spark;
// }
// int main() {
//     std::vector<Car*> carCollection;
//     carCollection.push_back(Car::produceCar(1));
//     carCollection.push_back(Car::produceCar(2));
//     carCollection.push_back(Car::produceCar(3));
//
//     for(auto& car : carCollection) {
//         car->echoName();
//     }
// }