// #include <iostream>
//
// class Counter {
// public:
//     int getCount() const {
//         return count;
//     }
//     void setCount(int count) {
//         this->count = count;
//     }
//     // const 는 값 변경 못하게 하는 키워드
//     // void incrementCount() const {
//     //     ++count;
//     // }
//
//     void incrementCount() {
//         ++count;
//     }
// private:
//     int count;
// };
//
// int main() {
//     Counter ctr;
//     ctr.setCount(10);
//     int count = ctr.getCount();
//     std::cout << count << std::endl;
//     const Counter& ctr2 = ctr;
//
//     // 불가 ctr2.setCount(20);
//     count = ctr2.getCount();
//     std::cout << count << std::endl;
// }