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
//
//     void foo() {
//         std::cout << "foo" << std::endl;
//     }
// };
// int main() {
//     Test test;
//     Test* test2 = new Test();
//     delete test2;
//     test.foo();
//     // 정의되지않은 접근
//     test2->foo();
//
//     //
//     std::cout << "case : " << std::endl;
//
//     std::unique_ptr<Test> test3;
//     test3->foo();
//     std::unique_ptr<Test> test4(new Test());
//     test4->foo();
//
//     std::cout << "Mid : " << std::endl;
//     std::unique_ptr<Test> urb = std::move(test4);
//     urb->foo();
//
//     std::cout << "end : " << std::endl;
//     std::unique_ptr<Test> &a = test4;
//     test4->foo();
//     std::unique_ptr<Test> upa(new Test());
//     Test *b = upa.get();
//     b->foo();
//
// }