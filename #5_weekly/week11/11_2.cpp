// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Rect {
//     int w, h;
// public:
//     Rect(): w(0), h(0){}
//     Rect(int w, int h): w(w), h(h) { }
//     int area() const { return w*h; }
//     void print() {
//         cout << "(" << w << "," << h << "," << area() << ")" << endl;
//     }
//     bool operator<(const Rect& rhs) const {
//         return this->area() < rhs.area();
//     }
// };
//
// int main() {
//     std::vector<Rect> rectangles;
//     int count, w, h;
//     cout << "사각형의 개수: ";
//     cin >> count;
//     for (int i = 0; i < count; i++) {
//         cout << "사각형의 폭: ";
//         cin >> w;
//         cout << "사각형의 높이: ";
//         cin >> h;
//         rectangles.emplace_back(w, h);
//     }
//     sort(rectangles.begin(), rectangles.end());
//
//     for (int i = 0; i < rectangles.size(); i++) {
//         rectangles[i].print();
//     }
// }
