// #include <iostream>
// #include <string>
//
// /*
// 별도의 클래스에서 다른 클래스의 operation 사용
//
// 알고리즘의 집합을 정의하고, 각각을 캡슐화하며, 서로 교체 가능하도록 만듦
// 클라이언트는 파생 클래스(알고리즘을 제공하는 클래스)의 변경에
// 영향을 받지 않고 다양한 알고리즘을 사용할 수 있음
// */
//
// class Strategy {
// public:
//     virtual int doOperation(int num1, int num2) = 0;
// };
//
// class OperationAdd : public Strategy {
// public:
//     int doOperation(int num1, int num2) override {
//         return num1 + num2;
//     }
// };
//
// class OperationSubstract : public Strategy {
// public:
//     int doOperation(int num1, int num2) override {
//         return num1 - num2;
//     }
// };
//
// class OperationMultiply : public Strategy {
// public:
//     int doOperation(int num1, int num2) override {
//         return num1 * num2;
//     }
// };
//
// class Context {
//     Strategy* strategy;
// public:
//     Context(Strategy* str) : strategy(str) {}
//
//     int exectueStrategy(int num1, int num2) {
//         return strategy->doOperation(num1, num2);
//     }
// };
//
// int main() {
//     Context context(new OperationAdd());
//     OperationSubstract operationSubstract;
//     Context con = new OperationSubstract();
//     Context context2 = &operationSubstract;
//     Context* context3 = new Context(new OperationMultiply());
//     Context context4(new OperationMultiply());
//
//     std::cout << context.exectueStrategy(1, 2) << std::endl;
//     std::cout << context2.exectueStrategy(1, 2) << std::endl;
//     std::cout << context3->exectueStrategy(1, 2) << std::endl;
//     std::cout << context4.exectueStrategy(1, 2) << std::endl;
//     std::cout << con.exectueStrategy(1, 2) << std::endl;
// }
//
