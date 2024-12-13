//
//
// #include <iostream>
//
// /* 부모클래스를 virtual 로 상속
// 생성자 호출 순서
// Animal::Animal()
// Cat::Cat()
// Dog::Dog()
// DogCat::DogCat()
//  */
// class Animal {
// public:
//     Animal() {
//         std::cout << "Animal::Animal()" << std::endl;
//     }
//     int age;
// protected:
//
// };
//
// class Cat : public virtual Animal {
//     public:
//     Cat() {
//         std::cout << "Cat::Cat()" << std::endl;
//     }
//     int cat;
// };
// class Dog : public virtual Animal {
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
//     // 가능
//     animal = dat;
//     // 한번에 상속 가능
//     animal = (Animal*)dat;
//     //
//     dat->setAge();
//     dat->age;
//     dat->cat;
//     dat->dog;
//     dat->dc;
//
//     animal->age;
//     animal->cat;
//     animal->dc;
//
//     animal = static_cast<Cat*>(dat);
//     animal->age;
//     animal->cat;
//     animal->dc;
//     //animal->setAge();
//
//     animal = (Cat*)dat;
//     //animal->setAge();
// }