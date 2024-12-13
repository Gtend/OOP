// #include <iostream>
// using namespace std;
// // lvalue : 왼쪽에 위치 가능
// // rvalue : 오른쪽에만 위치 가능, 임시값, 레퍼런스하려면 const키워드 필수
// int main() {
//     //int& ref = 4;
//     // rvalue 선언
//     const int& refer = 4;
//     int test = refer;
//
//     cout << refer << endl;
//     cout << test << endl;
//
//     // reference with array
//     //int a, b;
//     //int& arr[2] = {a,b};
//     int a[4] = {1,2,3,4};
//     int (&ref)[4] = a;
//
//     ref[0] = 10;
//     ref[1] = 20;
//
//     cout << a[0] << endl;
//     cout << ref[0] << endl;
//
//     int b[2][2] = {1,2,3,4};
//     int (&ref2)[2][2] = b;
//
//     cout << b << endl;
//     cout << b[0][0] << endl;
//     cout << ref2;
// }
