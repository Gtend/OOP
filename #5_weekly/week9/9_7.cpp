// #include <iostream>
// #include <vector>
//
// class Animal {
// public:
//     virtual void speak() {
//         std::cout << "동물소리" << std::endl;
//     }
//     int y;
// };
//
// class Dog : public Animal {
// public:
//     void speak() override {
//         std::cout << "멍멍" << std::endl;
//     }
// };
//
// class Cat : public Animal {
// public:
//     void speak() override {
//         std::cout << "야옹" << std::endl;
//     }
//     int x;
// };
//
// int main() {
//     Animal* animal = new Animal();
//     Cat* cat = new Cat();
//     Dog* dog = new Dog();
//     animal->speak();
//     cat->speak();
//     dog->speak();
//
//     Animal* animals[3];
//     animals[0] = new Animal();
//     animals[1] = new Cat();
//     animals[2] = new Dog();
//     for (int i = 0; i < 3; i++)
//         animals[i]->speak();
// }