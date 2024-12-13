// #include <iostream>
//
// // 함수처럼 호출될 수 있는 객체
// // 클래스 내 operator() 연산자를 오버로드
// // 일반 함수와 비슷한 방식으로 호출되지만, 상태 정보를 포함할 수 있는 객체
// struct LessThan {
//     bool operator() (double x, double y) const {
//         return x < y;
//     }
// };
//
// class IsGreater {
// public:
//     IsGreater(int threshold) : threshold_(threshold) {}
//     bool operator() (int x) const {
//         return x > threshold_;
//     }
// private:
//     int threshold_;
// };
//
// int main() {
//     double x = 1.7;
//     double y = 2.3;
//     LessThan lessThan;
//     bool result = lessThan(x, y);
//     std::cout << result << std::endl;
//
//     IsGreater isGreater(5);
//     int xx = 3;
//     bool result2 = isGreater(xx);
//     std::cout << result2 << std::endl;
// }
