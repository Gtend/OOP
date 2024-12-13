// /*
// constexpr : 컴파일 타임에 상수계산
// const : 런타임에 상수 계산 가능
// 초기화는 되어야함.
//  */
// constexpr int min = 17;
// void cal(int n) {
//     constexpr int ce1 = min + 1; // OK
//     // constexpr int ce2 = n + 1; // ERROR: n은 런타임에만 알려지는 값
//     const int cs3 = n + 1;
//     //const cs4; // error
// }
//
// int main() {
//     const int min = 17;
//     constexpr int ce1 = min + 1; // OK
//
//     // 에러 뜸 -> 런타임 초기화여서
//     cal(10);
//     int n;
//     //const int m = n;
//     //constexpr int m = n; // error
//
// }