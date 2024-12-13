// #include <iostream>
//
// class Mydata {
//     int my_int_data;
// public:
//     // prevent implicit conversion : 정확한 상황에서만 동작하게 함.
//     explicit Mydata(int data):my_int_data(data) {}
//     //Mydata(int data):my_int_data(data) {}
//
//     ~Mydata() {}
//     int get_data() const {
//         return my_int_data;
//     }
// };
//
// void incrementAndShow(Mydata md) {
//     int temp = md.get_data();
//     std::cout << ++temp << std::endl;
// }
//
// int main() {
//     Mydata a(3);
//     //Mydata b = 4;
//     incrementAndShow(a);
//     incrementAndShow(Mydata(10));
//     //incrementAndShow(20); // == incrementAndShow(Mydata(20))
//
//
// }