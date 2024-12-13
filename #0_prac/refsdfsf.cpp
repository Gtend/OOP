// #include <iostream>
//
// class Student {
//     public:
//     Student(char* str) {
//         this->str = str;
//     }
//
//     char* getstr() {
//         return str;
//     }
//     char* setstr(char* str) {
//         this->str = str;
//         return "Good";
//     }
//     int& getint() {
//         return x;
//     }
//     int x = 10;
//     char* str;
// };
//
// int main() {
//     Student student("chaemin");
//     std::cout << student.getstr() << std::endl;
//     std::cout << student.setstr("sdfs") << std::endl;
//     std::cout << student.getint() << std::endl;
//     int &a = student.getint();
//     std::cout << a << std::endl;
// }