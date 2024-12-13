// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
//
// /*
// 객체 간 일대다 관계를 정의하여, 한 객체의 상태가 변경될 때 이를
// 의존하는 다른 객체들에 자동으로 통지하고 업데이트를 수행하는 디자인 패턴
//
// Subject 안에 observer리스트
// Subject -> notifyALlObserver -> Observer(notify or update)
// Observer 추상클래스
// */
//
// class Observer;
//
// class Subject {
// private:
//     std::vector<Observer*> observers;
//     int state;
// public:
//     int getState() const {
//         return state;
//     }
//     void setState(int state) {
//         this->state = state;
//     }
//     // void setState(int state) : state(state) {}
//     void attach(Observer* observer) {
//         observers.push_back(observer);
//     }
//     void notifyAllObservers() {
//         for (Observer* observer : observers) {
//             observer->update();
//         }
//     }
// };
//
// class Observer {
// public:
//     Subject& subject;
//     Observer(Subject& subject) : subject(subject) {}
//     virtual void update() = 0;
// };
//
// class BinaryObserver : public Observer {
// public:
//     BinaryObserver(Subject& subject) : Observer(subject) {
//         subject.attach(this);
//     }
//     void update() override {
//
//     }
// };
//
//
//
//
//
//
