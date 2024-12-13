// #include <iostream>
//
// class BaseClass {
//     public:
//     int x = 1;
//     virtual ~BaseClass() {}
// };
//
// class DerivedClass : public BaseClass {
//     public:
//     int y = 10;
//     ~DerivedClass() {}
// };
//
// int main() {
//     BaseClass* baseClass = new BaseClass();
//     DerivedClass* derivedClass = new DerivedClass();
//
//     BaseClass* base = new DerivedClass();
//     base->x;
//     //base->y; //error
//
//     DerivedClass* derived = dynamic_cast<DerivedClass*>(base);
//     if(derived) {
//         std::cout << "Okay" << std::endl;
//     }
//     std::cout << derived->x << std::endl;
//     std::cout << derived->y << std::endl;
//     std::cout << "-----" << std::endl;
//
//     DerivedClass* derived2 = static_cast<DerivedClass*>(baseClass);
//     if(derived2) {
//         std::cout << "Okay" << std::endl;
//     }else {
//         std::cout << "Not okay" << std::endl;
//     }
//     std::cout << derived2->x << std::endl;
//     std::cout << derived2->y << std::endl;
//
//     std::cout << "-----" << std::endl;
//     DerivedClass* derived3 = dynamic_cast<DerivedClass*>(baseClass);
//     if(derived3) {
//         std::cout << "Okay" << std::endl;
//     }else {
//         std::cout << "Not okay" << std::endl;
//     }
//     std::cout << derived3->x << std::endl;
//     std::cout << derived3->y << std::endl;
//
// }