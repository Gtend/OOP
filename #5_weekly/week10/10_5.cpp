// #include <iostream>
// #include <cassert>
//
// // CEO 클래스 (rank1)
// class CEO {
// public:
//     virtual ~CEO() {}
//
// };
//
// class CPO {
//     public:
//     virtual ~CPO() {}
// };
//
// class Manager : public CEO, public CPO {
//     public:
//     virtual ~Manager() {}
//     int x;
// };
//
// class Staff : public Manager {
//     public:
//     virtual ~Staff() {}
// };
//
// int main() {
//     CPO* cpo = (new Staff());
//     CEO* ceo = new Staff();
//
//     Staff* staff = dynamic_cast<Staff*>(cpo);
//     Staff* staff2 = dynamic_cast<Staff*>(ceo);
//     Manager* manager = dynamic_cast<Manager*>(cpo);
//     manager->x = 10;
//
//     assert(staff != nullptr);
//     assert(staff2 != nullptr);
//     assert(manager != nullptr);
// }