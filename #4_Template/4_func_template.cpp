// /*
// Function Template : 하나 이상의 매개변수로 매개변수화된 함수
// template <parameter_list> function_declaration
//
// template function이 인스턴스화 됐을떄 컴파일러가 코드 만듦.
//
//  - Qualified Name : ex) std::cout
//  - Dependent Name : template parameter에 의존 T::value
//  - Qualified Dependent Name : typename std::vector<T>::value
// */
// #include <iostream>
//
// // 선언 및 default 선언
// template <typename T>
// T max(T x, T y) {
//     return x > y ? x : y;
// }
//
// void func(int i1, int i2, double d1, double d2) {
//     double z = max(d1,d2);
//     int k = max(i1,i2);
//
//     // 명시적으로 알려줘야함
//     z = max(i1,d2); // error
//     z = max(i1,i2);
//     z = max<double>(i1,d2);
// }