// #include <iostream>
// #include <string>
// #include <vector>
//
// /*
//  private -
//  protected #
//  public +
//
//  Aggregation : A is part of/ has B 빈칸 마름모
//  Composition : A is made of B 채운 마름모
//  */
//
// // is - a relationship
// class Base {
// public:
//     void func_1() {}
//     int x_;
// protected:
//     void func_2() {}
//     //int x_;
// private:
//     void func_3() {}
//     //int x_;
// };
//
// class Derived : private Base {
// public:
//     void func_4() {
//         func_1();
//         func_2();
//         // func_3();
//         x_ = 0;
//     }
// };
//
// int main() {
//     Derived d = Derived();
//     Derived d2;
//     d.func_4();
//     d.func_1();
//     d2.func_4();
//     d2.func_1();
//     // d.func_2();
//     // d.func_3();
// }
// // class Derived : private Base {
// // public:
// //     void func_4() {
// //         func_1(); // ok
// //         func_2(); // ok
// //         // func_3();
// //         x_ = 0;
// //     }
// // };
//
