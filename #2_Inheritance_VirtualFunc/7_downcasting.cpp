// #include <iostream>
// #include <string>
// #include <vector>
// #include <cassert>
//
// class Base {
//     std::string s;
// public:
//     Base() : s("Base") {}
//     virtual void what() {std::cout << s << std::endl;}
//     int x = 10;
//     //virtual ~Base() {}
// };
//
// class Derived : public Base {
//     std::string s;
// public:
//     Derived() : s("Derived"), Base() {}
//
//     void what() override {std::cout << s << std::endl;}
//     int xxx = 100;
// };
//
// int main() {
//     Base b;
//     Derived d;
//     Base bb = Derived();
//     Base* xx = &d;
//     //Derived* pd = xx;
//     xx->what();
//     // 다운캐스팅
//     Base* x = new Derived();
//     //Derived* pd0 = (x);
//     Derived* pd0 = (Derived*)(x);
//     Derived* pd = static_cast<Derived*>(x);
//     Derived* pd2 = static_cast<Derived*>(xx);
//
//     pd->what();
//     pd2->what();
//     // 가상 소멸자 or 가상 함수 있으면 dynamic_cast가능 (가상함수 -> RTTI활성화)
//     Derived* yy = dynamic_cast<Derived*>(xx);
//     yy->what();
//     //yy->what();
//
//     // 다운 캐스팅 잘 못하면 잘못된거 가르킴.. xxx값 접근해도 이상한 값 가져옴
//     // dynamic casting으로 하면 nullptr됨
//     Base* base = new Base();
//     Derived* derived = static_cast<Derived*>(base);
//     std::cout << derived->x << std::endl; //ok
//     std::cout << derived->xxx << std::endl; //memory corruption
//     derived->what();
//
//     std::cout << "test" << std::endl;
//
//     // nullptr이여서 아무것도 출력 못함..
//     Derived* derived2 = dynamic_cast<Derived*>(base);
//     std::cout << derived2->x << std::endl;
//     std::cout << derived2->xxx << std::endl;
//     derived2->what();
// }
