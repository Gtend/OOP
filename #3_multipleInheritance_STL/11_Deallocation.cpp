// #include <iostream>
//
// class Test {
//     int* storage;
// public:
//     Test() {
//         storage = new int[4];
//         std::cout << "Test constructor" << std::endl;
//     }
//     ~Test() {
//         std::cout << "Test destructor" << std::endl;
//         delete[] storage;
//     }
// };
// int main() {
//     Test test;
//     Test* test2 = new Test();
//     delete test2;
//
//     // RAII
//     // 자원의 할당과 해제를 객체의 생성자와 소멸자에서
//     // 자동으로 관리하여 안정성과 예외 안전성을 보장하는 개념
//     std::cout << "RAII case" << std::endl;
//     Test* a = new Test();
//     Test* b = a;
//     delete a;
//     // double freed
//     delete b;
//     std::cout << "Test RAII Finished" << std::endl;
// }