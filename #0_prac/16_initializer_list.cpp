// #include <iostream>
// #include <string.h>
// #include <cassert>
//
// class My_cat {
//     int age;
//     char* name;
// public:
//     My_cat();
//     My_cat(int x, const char* name) {}
//     My_cat(const My_cat& cat);
//     ~My_cat() {}
//
//     void show_status();
// };
// // T:T():~ -> : is initializer list  중요 !!!!!! "변수 정의된 순서대로 초기화됨"
// My_cat::My_cat():age(20), name(NULL) {}
//
// /* same
// My_cat::My_cat() {
//     age = 20;
//     name = NULL;
// }
// */
// My_cat::My_cat(const My_cat& cat) {
//     std::cout << "copy constructor" << std::endl;
//     age = cat.age;
//     name = new char(strlen(cat.name) + 1);
//     strcpy(name, cat.name);
// }
//
// class Machine {
// public:
//     int height;
//     int width;
//     // Machine();
//     // Machine() : width(55), height(width+30) {
//     //     assert(height==85);
//     // }
//     Machine() : height(55), width(height+30) {
//         assert(width==85);
//     }
// };
// // Machine::Machine() : height(55), width(height+30) {
// //     assert(width==85);
// // }
// int main() {
//     My_cat cat1;
//     //My_cat cat2(cat1);
//     //My_cat cat3 = cat2;
//     Machine M;
//     return 100;
// }