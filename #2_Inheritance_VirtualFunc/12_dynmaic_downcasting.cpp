// #include <iostream>
// #include <string>
// #include <vector>
// #include <cassert>
//
// class Base {
//     std::string s;
// public:
//     int x =10;
//     Base() : s("Base") {}
//     virtual void what() {std::cout << s << std::endl;}
// };
//
// class Derived : public Base {
//     std::string s;
// public:
//     int xxx = 100;
//     Derived() : s("Derived"), Base() {}
//     void what() {std::cout << s << std::endl;}
// };
//
// int main() {
//     Base b;
//     Derived d;
//     Base* xx = &d;
//
//     // 다운캐스팅
//     Derived* ptr = static_cast<Derived*>(xx);
//     ptr->what();
//     std::cout << ptr->x << std::endl;
//     std::cout << ptr->xxx << std::endl;
//     // 가상 소멸자 or 가상 함수 있으면 dynamic_cast가능 (가상함수 -> RTTI활성화)
//     Derived* yy = dynamic_cast<Derived*>(xx);
//     yy->what();
//
//     // static 잘못
//     std::cout << "nullptr" << std::endl;
//     Derived* der = static_cast<Derived*>(&b);
//     std::cout << der->x << std::endl;
//     std::cout << der->xxx << std::endl;
//     assert(der!=nullptr);
//     der->what();
//
//     // dynamic down casting -> nullptr담김
//     // why? 진짜 base를 derived에 담아서
//     std::cout << "nullptr" << std::endl;
//     Derived* zz = dynamic_cast<Derived*>(&b);
//     std::cout << zz->x << std::endl;
//     std::cout << zz->xxx << std::endl;
//     assert(zz!=nullptr);
//     zz->what();
// }