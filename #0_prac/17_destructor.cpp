// #include <iostream>
// #include <string.h>
//
// class String {
//
// public:
//     char *s;
//     int size;
//     String(char *);
//     // destructor ~T()
//     // defalut는 delete 안함.
//     ~String();
// };
//
// String::String(char *c) {
//     size = strlen(c);
//     s = new char[size+1];
//     strcpy(s,c);
// }
//
// String::~String() {
//     // 문자열 delete 니까 delete[] s 해야함.
//     std::cout << "Destructor called" << std::endl;
//     delete []s;
// }
//
// int main() {
//     String s = String("hello world");
//     char* c = "Hi";
//     std::cout << s.s << std::endl;
//     std::cout << strlen(c) << std::endl;
//     char* new_c = new char[strlen(c)+1];
//     strcpy(new_c, c);
//     std::cout << new_c << std::endl;
// }