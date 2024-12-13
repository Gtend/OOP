// #include <iostream>
// #include <string>
//
// /*
// 객체의 생성 코드를 별도의 클래스 == Factory로 분리
// 객체 생성을 Factory class를 통해서 함
// 클라이언트 -> 공통 인터페이스(팩토리 메서드)를 사용하여 객체를 생성
// client -> carFactory -> Car(Interface) -> sonata, spark..
// */
//
// class Product {
// public:
//     // 순수가상함수로 선언해야됨
//     virtual void use()=0;
//     // 일반가상함수임
//     //virtual void use() {}
//     virtual ~Product(){}
// };
//
// class ConcreteProductA : public Product {
// public:
//     void use() override {
//         std::cout << "ConcreteProductA" << std::endl;
//     }
// };
//
// class ConcreteProductB : public Product {
// public:
//     void use() override {
//         std::cout << "ConcreteProductB" << std::endl;
//     }
// };
//
// class Factory {
// public:
//     static Product* createProduct(const std::string& str) {
//         if(str == "A") {
//             return new ConcreteProductA;
//         } else if(str == "B") {
//             return new ConcreteProductB;
//         } else {
//             std::cerr << "Wrong input" << std::endl;
//             return nullptr;
//         }
//     }
// };
//
// int main() {
//     Product* productA = new ConcreteProductA();
//     Product* productB = Factory::createProduct("B");
//     Product* productC = Factory::createProduct("C");
//     productA->use();
//     productB->use();
//     productC->use();
//
// }