// #include <iostream>
// #include <vector>
// class Observer;
//
// class Subject {
// private:
//     std::vector<Observer *> observers;
//     int state;
// public:
//     int getState() {
//         // 코드 구현
//         return state;
//     }
//     void setState(int state) {
//         // 코드 구현
//         this->state = state;
//         notifyAllObservers();
//     }
//     void attach(Observer* observer) {
//         // 코드 구현
//         observers.push_back(observer);
//     }
//     void notifyAllObservers();
// };
//
// class Observer {
//     // 코드 구현
// protected:
//     Subject* subject;
// public:
//     virtual void update() = 0;
// };
//
// void Subject::notifyAllObservers() {
//     // 코드 구현
//     for (Observer* observer : observers) {
//         observer->update();
//     }
// }
//
// class BinaryObserver : public Observer {
//     public:
//     BinaryObserver(Subject* subject) {
//         subject->attach(this);
//     }
//     void update() {
//         std::cout << "Binary Observer" << std::endl;
//     }
// };
//
// int main() {
//     Subject* subject = new Subject();
//     Observer* observer = new BinaryObserver(subject);
//     Observer* observer2 = new BinaryObserver(subject);
//     subject->setState(1);
// }