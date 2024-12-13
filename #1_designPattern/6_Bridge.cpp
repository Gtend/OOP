// #include <iostream>
// #include <string>
// #include <vector>
//
// /*
// Bridge 패턴은 구현부와 추상부를 분리하여 서로 독립적으로 확장할 수 있도록 설계하는 디자인 패턴
// 이 패턴은 특정 기능과 그 기능의 구현을 분리함으로써 기능 계층과 구현 계층이
// 독립적으로 변경될 수 있도록 함
//
// Bridge 패턴 필수요소
// Abstraction(Shape)
// Implementor(DrawAPI)
// Refine Abstraction(Circle)
// Concrete Implementor(RedCircle, GreenCircle)
//
// */
//
// class DrawAPI {
// public:
//     virtual void drawCircle(int radius, int x, int y) = 0;
// };
//
// class RedCircle : public DrawAPI {
// public:
//     void drawCircle(int radius, int x, int y) override {
//         std::cout << "drawCircle RED " << radius << " " << x << " " << y << std::endl;
//     }
// };
//
// class GreenCircle : public DrawAPI {
// public:
//     void drawCircle(int radius, int x, int y) override {
//         std::cout << "drawCircle GREEN " << radius << " " << x << " " << y << std::endl;
//     }
// };
//
// class Shape {
// public:
//     DrawAPI* drawAPI;
//
//     Shape(DrawAPI* drawAPI) : drawAPI(drawAPI) {}
//
//     virtual void draw() = 0;
// };
//
// class Circle : public Shape {
// private:
//     int x, y, radius;
// public:
//     Circle(int x, int y, int radius, DrawAPI* drawAPI) : Shape(drawAPI) {
//         this->x = x;
//         this->y = y;
//         this->radius = radius;
//     }
//
//     void draw() override {
//         drawAPI->drawCircle(radius, x, y);
//     }
// };
//
// int main() {
//     Shape* redCircle = new Circle(100,100,10, new RedCircle);
//     Shape* greenCircle = new Circle(100,100,10, new GreenCircle);
//
//     redCircle->draw();
//     greenCircle->draw();
// }