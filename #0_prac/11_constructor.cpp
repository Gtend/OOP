// #include <iostream>
//
// class Animal {
//     public:
//     Animal() {
//         numberOfLeg = 0;
//     }
//     Animal(int numberOfLeg) {
//       this->numberOfLeg = numberOfLeg;
//     }
//     //Animal(int nol) : numberOfLeg(nol) {};
//
//     private:
//     int numberOfLeg;
// };
// Animal animal;
// Animal ani = Animal();
// Animal aaa = 10;
// //Animal func();
// Animal funcAnimal(10);
//
// class Point {
// private:
//     int x, y;
// public:
//     Point(int x1, int y1) {
//         this->x = x1;
//         y = y1;
//     }
//     int getX() {
//         return x;
//     }
//     int getY() {
//         return this->y;
//     }
// };
//
// int main() {
//     // 인스턴스 선언 방법 implicit or Explicit
//     Point p1(10,15); // implicit
//     Point p2 = Point(20,30); // explicit
//     Point* p3 = new Point(20,30); // use pointer
//     std::cout << p1.getX() << " " << p1.getY() << std::endl;
//     std::cout << p2.getX() << " " << p2.getY() << std::endl;
//     std::cout << p3->getX() << " " << p3->getY() << std::endl;
// }