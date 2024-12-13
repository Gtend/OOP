// #include <iostream>
//
// // static function은 this 키워드 사용 불가!!
// class My_cat {
//     mutable int age;
//     int weight;
//     public:
//     My_cat();
//     My_cat(int x);
//     ~My_cat();
//     int a() const{
//         age++;
//     }
//
//     void show_status() const;
//     My_cat& eat(int food);
// };
//
// My_cat::My_cat(): age(20), weight(10) {}
//
// My_cat::My_cat(int x): weight(10) {
//     age = x;
// }
//
// My_cat::~My_cat() {
//     std::cout << "Destructing My_cat" << std::endl;
// }
// // 중요!!!!!! 시험에 무조건 나옴 ㄹㅇㄹㅇ
// My_cat& My_cat::eat(int food) {
//     weight += food;
//     std::cout << "eat " << food << std::endl;
//     return *this; // 객체 레퍼런스 반환
// }
//
// void My_cat::show_status() const {
//     std::cout << "age: " << age << std::endl;
//     std::cout << "weight: " << weight << std::endl;
// }
//
// int main() {
//     My_cat cat1(3);
//     cat1.show_status();
//
//     cat1.eat(5);
//     cat1.show_status();
//
//     cat1.eat(5).eat(5);
//     cat1.show_status();
// }