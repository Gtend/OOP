// #include <iostream>
//
// typedef int Coordinate;
// typedef int Dimension;
//
// class Rectangle {
//     public:
//     virtual void draw() = 0;
//     int x;
// };
//
// class LegacyRectangle {
// private:
//     Coordinate x1;
//     Coordinate y1;
//     Coordinate x2;
//     Coordinate y2;
// public:
//     LegacyRectangle(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2) {
//         this->x1 = x1;
//         this->y1 = y1;
//         this->x2 = x2;
//         this->y2 = y2;
//         std::cout << "Legacy rectangle created" << std::endl;
//     }
// };
//
// // Adapter Class
// class RectangleAdapter : public Rectangle , public LegacyRectangle {
// public:
//     RectangleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h)
//     : LegacyRectangle(x, y, x+w, y+h) {
//         std::cout << "Rectangle Adapter created" << std::endl;
//     }
//     void draw() override {
//         std::cout << "Rectangle draw" << std::endl;
//     }
// };
//
// int main() {
//     Rectangle* rec = new RectangleAdapter(1, 2, 3, 4);
//     rec->draw();
//     rec->x;
// }