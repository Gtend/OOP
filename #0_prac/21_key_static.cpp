// #include <iostream>
//
// // 모든 객체에서 공유되게 하는 static 키워드
// // 선언은 내부 초기화는 클래스 외부
// using namespace std;
// class Machine {
// int a;
// public:
//     Machine() {++count;}
//     Machine(const Machine &) {++count;}
//     Machine(Machine&&) {++count;}
//     ~Machine() {
//         std::cout<<"Machine destructor"<<std::endl;
//         std::cout<<count<<std::endl;
//         --count;
//     }
//     // static member function
//     static void move() {
//         std::cout << "Moving!" << std::endl;
//         count++;
//     }
//     // static member data
//
//     static int count;
// };
// int Machine::count = 0;
//
// int main() {
//     Machine m1;
//     Machine m2;
//     m1.move();
//     m2.move();
//     Machine::move(); // 공유 함수여서 객체 생성안하고 호출 가능
//     cout << m2.count << endl;
//     //cout << Machine::count << endl;
//
// }