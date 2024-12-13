// #include <iostream>
// #include <deque>
//
// int main() {
//     std::deque<int> deque;
//     deque.push_back(11);
//     deque.push_back(22);
//     deque.push_back(33);
//     deque.push_back(44);
//
//     for(int i =0; i<deque.size(); i++) {
//         std::cout << deque[i] << std::endl;
//     }
//
//     // iterator 사용
//     std::deque<int>::iterator itr;
//     for (itr = deque.begin(); itr != deque.end(); ++itr) {
//         std::cout << *itr << std::endl;
//     }
//
//     // range-based for loop
//     for(const auto element : deque) {
//         std::cout << element << std::endl;
//     }
//
//     // range-based for loop use Reference
//     for(const auto& element : deque) {
//         std::cout << element << std::endl;
//     }
//
//
//  }