// #include <iostream>
// #include <stdexcept>
//
// class MyException : public std::exception {
// private:
//     char* message;
// public:
//     MyException(char* msg): message(msg){}
//     const char* what() const noexcept override {
//         return message;
//     }
//     // const char * what() const noexcept override
// };
// bool funcA() {
//     int c = -1;
//     if (c < 0) {
//         throw std::out_of_range("Invalid Input");
//     }
// }
// int funcB() noexcept{
//     return 0;
// }
// int funcC() {
//     throw;
// }
// int main() {
//     try {
//         funcA();
//         //funcB();
//     }catch(char c) {
//         std::cout << "catch" << c << std::endl;
//     }catch(std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }catch(...) {
//         std::cout << "catchALl" << std::endl;
//     }
//
//     try {
//         throw MyException("Hello world");
//     }catch(MyException& mce) {
//         std::cout << "caught : " << mce.what();
//     }
//
// }