// #include <iostream>
//
// class Information {
// public:
//     int updateValue(int newValue) {
//         int oldValue = value;
//         value = newValue;
//         return oldValue;
//     }
//     int get();
// private:
//     // 다른 클래스의 private 멤버에 접근할 있는 키워드
//     friend void friendAccess();
//     void tempFunction();
//     int value;
// };
//
// void friendAccess() {
//     // func -> class 만 가능, 그 역은 성립 x
//     Information info;
//     info.tempFunction();
//     info.value = 100;
//     info.updateValue(14);
// }
// void notFriendAccess() {
//     Information info;
//     info.updateValue(15);
//     // not allowed
//     //info.tempFunction();
//     //info.value = 300;
// }
// int main() {
//     Information info;
//     info.updateValue(15);
// }