// #include <iostream>
//
// // namespace 는 글로벌 지역에 선언 or namespace안에
// // redifine 및 오버라이딩 안해도 쓸 수 있음
// int a = 100;
// namespace N {
//     namespace D {
//         int a = 700;
//     }
//     int a = 300;
//     void f() {
//         int a = 500;
//         std::cout << a << std::endl;
//         std::cout << N::a << std::endl;
//         std::cout << D::a << std::endl;
//         std::cout << ::a << std::endl;
//     }
// } // 콜론 x
//
// namespace {
//     void functionA();
// } // unamed namspace -> static 처럼 사용가능
//
// // 사용법
// using namespace std;
// // rename 가능, 인스턴스 생성은 불가능
// namespace rename22 = N;
// namespace ree = std;
// int main() {
//     int a = 200;
//     ::cout << rename22::a << std::endl;
//     functionA();
//     // local
//     std::cout << "Local : " << a << std::endl;
//     // global variable 접근
//     std::cout << "Global : " <<::a << std::endl;
//
//     N::f();
//     std::cout << N::a << std::endl;
//     //system("pause");
//     return 0;
// }