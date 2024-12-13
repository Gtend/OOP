// #include <iostream>
// #include <ostream>
//
// class Shape {
// public:
//     virtual void draw() = 0;
// };
//
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Shape: Rectangle" << std::endl;
//     }
// };
//
// class Circle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Shape: Circle" << std::endl;
//     }
// };
//
// class ShapeDecorator : public Shape {
// protected:
//     Shape *decoratedShape;
// public:
//     ShapeDecorator(Shape *decoratedShape) : decoratedShape(decoratedShape) {}
//     void draw() override {
//         decoratedShape->draw();
//     }
// };
// class RedShapeDecorator : public ShapeDecorator {
//     public:
//     RedShapeDecorator(Shape *decoratedShape) : ShapeDecorator(decoratedShape) {}
//     void draw() override {
//         decoratedShape->draw();
//         setRedBorder(decoratedShape);
//     }
// private:
//     void setRedBorder(Shape* decoratedShape) {
//         std::cout << "Border Color: Red" << std::endl;
//     }
// };
//
// int main() {
//     // 객체 생성
//     Shape* circle = new Circle();
//     Shape* redCircle = new RedShapeDecorator(new Circle());
//     Shape* redRectangle = new RedShapeDecorator(new Rectangle());
//
//     // 함수 호출
//     std::cout << "Circle with normal border" << std::endl;
//     circle->draw();
//     std::cout << "\nCircle of red border" << std::endl;
//     redCircle->draw();
//     std::cout << "\nRectangle of red border" << std::endl;
//     redRectangle->draw();
//
// }
