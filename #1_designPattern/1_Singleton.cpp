// #include <iostream>
// // 인스턴스 하나만 생성. 모든 클라이언트에게 동일한 인스턴스 반환
// // 클래스의 다중 객체 생성 제한 !! + global access
// // use in Hardware interface / Logger / Configuration file
// /// 필수요소 :
// /// static object / private constructor / static method
//
// /*
// UML 다이어그램:
// +---------------------+
// |      Singleton      |
// +---------------------+
// | - instance: Singleton*  // 정적 인스턴스 포인터 (유일한 인스턴스를 참조)
// +---------------------+
// | - Singleton()        // private 생성자 (외부에서 객체 생성 불가)
// | + getInstance(): Singleton*  // 인스턴스를 반환하는 정적 메서드
// | + deleteInstance()           // 메모리 해제를 위한 정적 메서드
// +---------------------+
//
// Singleton 패턴의 중요 구성 요소:
//
// 1. **정적 인스턴스 변수 (Static Instance Variable):**
// - Singleton 클래스의 유일한 인스턴스를 저장합니다.
// - 외부에서 직접 접근할 수 없도록 private으로 선언합니다.
//
// 2. **정적 메서드 (Static Method):**
// - `getInstance()` 메서드를 통해 정적 인스턴스를 반환합니다.
// - 이 메서드는 클래스 차원에서 호출 가능하며, 외부에서 객체 생성 없이도 접근할 수 있습니다.
//
// 3. **private 생성자 (Private Constructor):**
// - 외부에서 객체를 생성하지 못하도록 생성자를 private으로 선언합니다.
// - 이를 통해 인스턴스 생성을 `getInstance()` 메서드 내부에서만 가능하도록 제한
// */
//
// class Singleton {
// private:
//     static Singleton* instance;
//     Singleton() {
//         std::cout << "Singleton constructor" << std::endl;
//     }
// public:
//     static Singleton* getInstance() {
//         if (instance==nullptr) {
//             instance = new Singleton();
//         }
//         std::cout << "foo" << std::endl;
//         return instance;
// }
// };
//
// Singleton* Singleton::instance = nullptr;
//
// int main() {
//     Singleton* singleton = Singleton::getInstance();
//     Singleton* singleton2 = Singleton::getInstance();
//     std::cout << singleton << std::endl;
//     std::cout << singleton2 << std::endl;
//
// }
