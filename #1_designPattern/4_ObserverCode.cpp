// #include <vector>
// #include <iostream>
//
// class Observer {
// public:
//     virtual void update(int state) = 0;
// };
//
// class Subject {
//     std::vector<Observer*> observers;
//
// public:
//     int state;
//
//     void attach(Observer* observer) {
//         observers.push_back(observer);
//     }
//
//     void AddState(int state) {
//         this->state = state;
//         notify();
//     }
//
//     void notify() {
//         for (auto observer : observers) {
//             observer->update(state);
//         }
//     }
// };
//
// class DerivedObserver : public Observer {
// public:
//     int state;
//
//     DerivedObserver(Subject& subject, int state) : state(state) {
//         subject.attach(this);
//     }
//
//     void update(int state) {
//         this->state += state;
//     }
// };
//
// int main() {
//     Subject subject;
//     DerivedObserver derivedObserver(subject, 10);
//     DerivedObserver derivedObserver2(subject, 20);
//     std::cout << derivedObserver.state << std::endl;
//     std::cout << derivedObserver2.state << std::endl;
//
//     subject.AddState(10);
//
//     std::cout << subject.state << std::endl;
//     std::cout << derivedObserver.state << std::endl;
//     std::cout << derivedObserver2.state << std::endl;
//
//
// }
//
