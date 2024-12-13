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
//     // const func안에서도 변수 수정 가능!!
//     void incrementCount() const {
//         ++count;
//         //aa++;
//     }
// private:
//     // mutable 선언
//     mutable int count;
//     int aa;
// };
//
// int main() {
//     Counter ctr;
//     ctr.setCount(10);
//     int count1 = ctr.getCount();
//     std::cout << count1 << std::endl;
//     const Counter& ctr2 = ctr;
//
//     ctr2.incrementCount();
//     int count2 = ctr2.getCount();
//     std::cout << count1 << std::endl;
//     std::cout << count2 << std::endl;
// }