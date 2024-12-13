// /*
// Class Template : 하나 이상의 매개변수로 매개변수화된 클래스 계열
// template <parameter_list> class_declaration
// */
// #include <iostream>
//
// // 선언 및 default 선언
// template <typename T, unsigned int size>
// //template <typename T = int, unsigned int size = 2>
// class CustomArray {
//     T array_[size];
// };
// // CustomArray<> array;
// // CustomArray<double> d;
// // CustomArray<double, 10> i;
//
// //template <class TT>
//
// template <typename T = int>
// class Pair {
// public:
//     // default = 0
//     Pair(T x = T(0), T y = T(0)) : x_(x), y_(y) {}
//     T returnX() const {return x_;}
//     T returnY() const {return y_;}
// private:
//     T x_, y_;
// };
//
//
// int main() {
//     Pair<float> pairFloat;
//     std::cout << pairFloat.returnX();
//
//     CustomArray<float, 4> customArray;;
//
//     const int n = 4;
//     const int a = n;
//
//     int aaa = 4;
//     const int q = aaa;
//     const int aa = 10;
//     constexpr int bb = aa;
//     CustomArray<float, aa> customArray2;;
// }