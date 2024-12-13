// #include <iostream>
// #include <string>
// #include <vector>
//
// class Base {
//     std::string s;
// public:
//     Base() : s("Base") {
//         std::cout << "Base Construtor" << std::endl;
//     }
//     void what() {
//         std::cout << s << std::endl;
//     }
//     int x = 10;
// };
//
// class Derived : public Base {
//     std::string s;
// public:
//     Derived() : s("Derived"), Base() {
//         std::cout << "Derived Construtor" << std::endl;
//     }
//
//     void what() {
//         std::cout << s << std::endl;
//
//     }
//     int xx = 100;
// };
//
// int main() {
//     Base b;
//     Derived d;
//     // 이건 업캐스팅이 아니라 복사
//     // virtual 이 있어도 base의 멤버만 접근가능
//     Base bb = Derived();
//     // upcasting발생으로 인해 Base의 클래스의 멤버만 접근 가능
//     // upcasting 방법 (포인터, 참조, 명시적, casting)
//     Base* p = &d;
//     Base& ref = d;
//     Base* p2 = (Base*)&d;
//     Base* p3 = static_cast<Base*>(&d);
//     Base* p4 = dynamic_cast<Base*>(&d);
//     bb.what();
//     p->what();
//     ref.what();
//     p2->what();
//     p3->what();
//     p4->what();
//     p->x;
//     //p->xx;
// }