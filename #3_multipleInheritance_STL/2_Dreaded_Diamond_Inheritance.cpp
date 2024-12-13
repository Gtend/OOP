// #include <iostream>
//
// /*
// 생성자 호출 순서
//
// Animal::Animal()
// Cat::Cat()
// Animal::Animal()
// Dog::Dog()
// DogCat::DogCat()
//  */
// class Animal {
// public:
//     Animal() {
//         std::cout << "Animal::Animal()" << std::endl;
//     }
//     int animal;
//     int age;
// protected:
// };
//
// class Cat : public Animal {
//     public:
//     Cat() {
//         std::cout << "Cat::Cat()" << std::endl;
//     }
//     int cat;
// };
// class Dog : public Animal {
//     public:
//     Dog() {
//         std::cout << "Dog::Dog()" << std::endl;
//     }
//     int dog;
// };
// class DogCat : public Cat, public Dog {
//     public:
//     DogCat() {
//         std::cout << "DogCat::DogCat()" << std::endl;
//     }
//     void setAge() {
//         Cat::age = 10;
//     }
//     int dc;
// };
//
// int main() {
//     DogCat* dat = new DogCat();
//     Animal* animal;
//     dat->dog;
//     dat->cat;
//     dat->age;
//     dat->Dog::age;
//     dat->Cat::age;
//     dat->animal
//     dat->dc;
//     // 불가
//     // 한번에 상속 불가
//     animal = dat;
//     //
//     dat->setAge();
//
//     animal = static_cast<Cat*>(dat);
//     animal->setAge();
//     animal->age;
//     animal->animal;
//     animal->cat;
//     animal->dog;
//     animal->dc;
//     // animal->animal;
//
//     animal = (Cat*)dat;
//     animal->age;
//     animal->setAge();
// }