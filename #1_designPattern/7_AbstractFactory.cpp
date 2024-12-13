// #include <iostream>
// #include <string>
// #include <vector>
//
// /*
// Factory를 두개 이상 두자
// 이 Factory를 생성하는 클래스 하나 더
//
// AbstractFactory 패턴 필수요소
// Product Interface(Shape)
// Concrete Products(Rectangle, Square, RoundedRectangle, RoundedSquare)
// AbstractFactory(AbstractFactory)
// Concrete Factories(ShapeFactory, RoundedShapeFactory)
// Factory Producer(FactoryProdycer)
//
// FactoryProducer의 static 매서드를 통해 factory객체 생성
// factory 객체를 통해 getShape()을 해서 실제 product 객체 생성
// 실제 product 객체의 draw()함수 호출
// */
//
// class Shape {
// public:
//     virtual void draw() = 0;
// };
//
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Rectangle draw" << std::endl;
//     }
// };
//
// class Square : public Shape {
// public:
//     void draw() override {
//         std::cout << "Square draw" << std::endl;
//     }
// };
//
// class RoundedRectangle : public Shape {
// public:
//     void draw() override {
//         std::cout << "RoundedRectangle draw" << std::endl;
//     }
// };
//
// class RoundedSquare : public Shape {
// public:
//     void draw() override {
//         std::cout << "RoundedSquare draw" << std::endl;
//     }
// };
//
// class AbstractFactory {
// public:
//     virtual Shape* getShape(const std::string& shapeType) = 0;
// };
//
// class ShapeFactory : public AbstractFactory {
// public:
//     Shape* getShape(const std::string& shapeType) override {
//         if (shapeType == "Rectangle") {
//             return new Rectangle();
//         }
//         else if (shapeType == "Square") {
//             return new Square();
//         }
//         else return nullptr;
//     }
// };
//
// class RoundedShapeFactory : public AbstractFactory {
// public:
//     Shape* getShape(const std::string& shapeType) override {
//         if (shapeType == "Rectangle") {
//             return new RoundedRectangle();
//         }
//         else if (shapeType == "Square") {
//             return new RoundedSquare();
//         }
//         else return nullptr;
//     }
// };
//
// class FactoryProducer {
// public:
//     static AbstractFactory* getFactory(bool rounded) {
//         if (rounded) {
//             return new RoundedShapeFactory();
//         }
//         else {
//             return new ShapeFactory();
//         }
//     }
// };
//
// int main() {
//     AbstractFactory* shapeFactory = FactoryProducer::getFactory(false);
//     Shape* shape1 = shapeFactory->getShape("Rectangle");
//     shape1->draw();
//
//     Shape* shape2 = shapeFactory->getShape("Square");
//     shape2->draw();
//
//     shapeFactory = FactoryProducer::getFactory(true);
//
//     Shape* shape3 = shapeFactory->getShape("Rectangle");
//     shape3->draw();
//
//     Shape* shape4 = shapeFactory->getShape("Rectangle");
//     shape4->draw();
// }
//
//
//
