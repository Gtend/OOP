// #include <iostream>
//
// class RideStrategy {
//     public:
//     virtual void ride() = 0;
// };
//
// class Bus : public RideStrategy {
//     public:
//     void ride() override {
//         std::cout << "ride Bus" << std::endl;
//     }
// };
//
// class Taxi : public RideStrategy {
// public:
//     void ride() override {
//         std::cout << "ride Taxi" << std::endl;
//     }
// };
//
// class Person {
// protected:
//     RideStrategy* rideStrategy;
// public:
//     Person(RideStrategy* rideStrategy) : rideStrategy(rideStrategy) {}
//
//     virtual void ride() {
//         std::cout << "ride Person : " ;
//         rideStrategy->ride();
//     }
// };
//
// class James : public Person {
// public:
//     James(RideStrategy* rideStrategy) : Person(rideStrategy) {}
//
//     void ride() override {
//         std::cout << "ride James : " ;
//         rideStrategy->ride();
//     }
// };
//
// int main() {
//     RideStrategy* rideStrategy = new Bus();
//     Person* person = new James(rideStrategy);
//     Person* person2 = new James(new Taxi());
//     Person* person3 = new Person(new Taxi());
//
//     rideStrategy->ride();
//     person->ride();
//     person2->ride();
//     person3->ride();
// }
//
