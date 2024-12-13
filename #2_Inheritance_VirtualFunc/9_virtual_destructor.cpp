// #include <iostream>
//
// /* virtual 안붙은 소멸자
// Parent constructor
// Child constructor
// Parent Destructor
// */
// /* virtual 붙은 소멸자
// Parent constructor
// Child constructor
// Child Destructor
// Parent Destructor
//  */
// // => child 의 소멸자 호출 여부가 달라짐..
// class Parent {
// public:
//     Parent() {std::cout << "Parent constructor" << std::endl;}
//     // ~Parent() {
//     //     std::cout << "Parent Destructor" << std::endl;
//     // }
//     ~Parent() {
//         std::cout << "Parent Destructor" << std::endl;
//     }
// };
//
// class Child : public Parent {
// public:
//     Child() {std::cout << "Child constructor" << std::endl;}
//     ~Child() {
//         std::cout << "Child Destructor" << std::endl;
//     }
// };
//
// int main() {
//     std::cout << "case 1 " << std::endl;
//     {Child d;}
//
//     std::cout << "case 2 " << std::endl;
//     {
//         Parent* p = new Child();
//         delete p;
//     }
//
//     return 0;
// }
