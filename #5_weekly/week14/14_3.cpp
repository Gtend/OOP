// #include <iostream>
// #include <vector>
//
// // observer abstract
// class Depositor {
//     public:
//     virtual void update(int money) = 0;
// };
//
// // subject
// class Bank {
// private:
//     int interest;
//     std::vector<Depositor*> depositors;
// public:
//     void attach(Depositor* depositor) {
//         depositors.push_back(depositor);
//     }
//     void addInterest(int interest) {
//         this->interest += interest;
//         notify();
//     }
//
//     void notify() {
//         for (auto& depositor : depositors) {
//             depositor->update(interest);
//         }
//     }
// };
//
// class DepositorA : public Depositor {
// private:
//     int deposit;
// public:
//     DepositorA(Bank* bank, int deposit) {
//         bank->attach(this);
//         this->deposit = deposit;
//     }
//     void update(int money) override {
//         deposit += money;
//         std::cout << "DepositA: " << deposit << std::endl;
//     }
// };
//
// class DepositorB : public Depositor {
// private:
//     int deposit;
// public:
//     DepositorB(Bank* bank, int deposit) {
//         bank->attach(this);
//         this->deposit = deposit;
//     }
//     void update(int money) override {
//         deposit += money;
//         std::cout << "DepositB: " << deposit << std::endl;
//     }
// };
//
// int main() {
//     Bank* bank = new Bank();
//     Depositor* depoA = new DepositorA(bank, 10);
//     DepositorB* depoB = new DepositorB(bank, 20);
//     bank->addInterest(100);
// }