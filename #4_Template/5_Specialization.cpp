// #include <iostream>
// /*
// function template : can only explicitly specialized
// class template : partially or explicitly
//  */
// // unspeicalized template
// template <typename T, typename U>
// void SomeOperation(T x, U y) {}
//
// // explicit specialized of template
// // 특정 타입일떄 다른 구현하고싶음
// template <>
// void SomeOperation<bool,bool> (bool x, bool y) {}
//
// // class
// template <typename T>
// class ExplicitSpecial {};
//
// template <>
// class ExplicitSpecial<void> {};
//
// template <typename T, typename U>
// class SomeClass {
//  public:
//  SomeClass () {
//   std::cout << "Unspecified" << std::endl;
//  }
// };
//
// // partially specialized 가능
// template <typename T>
// class SomeClass<int, T> {
//  public:
//  SomeClass () {
//   std::cout << "Partialy" << std::endl;
//  }
// };
//
// template <>
// class SomeClass<int, int> {
//  public:
//  SomeClass () {
//   std::cout << "explicit" << std::endl;
//  }
// };
//
// int main() {
//  SomeClass<float, float> x;
//  SomeClass<int, bool> y;
//  SomeClass<int, int> z;
// }