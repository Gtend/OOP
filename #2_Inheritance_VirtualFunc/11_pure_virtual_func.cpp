// #include <iostream>
//
// // must be overriden in every derived class
// // add " = 0 " in virtual function declaration
//
// /*
// Abstract Class : 한개 이상의 순수 가상 함수 갖는 클래스
// 직접적으로 인스턴스 만들 수 없음
//  */
//
//
// class Animal {
// public:
//     virtual void eatFood() = 0;
// };
//
// class Cat : public Animal {
// public:
//     void eatFood() override {
//         std::cout << "Cat eats food" << std::endl;
//     }
// };
//
// class Dog : public Animal {
// public:
//     void eatFood() override {
//         std::cout << "Dog eats food" << std::endl;
//     }
// };
//
// int main() {
//     // this can't
//     Animal a;
//     Animal aa = new Animal();
//
//     // 가능
//     Animal* ptr = new Dog();
// }