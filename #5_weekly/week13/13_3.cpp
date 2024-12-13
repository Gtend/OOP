// #include <iostream>
// #include <algorithm>
// #include <forward_list>
// template <typename ForwardIterator, typename Compare>
// void bubble_sort(ForwardIterator first, ForwardIterator last, Compare comp) {
//     // bubble sort 로직 구현
//     if (first == last) return;
//     for (ForwardIterator it = first; it != last; ++it) {
//         ForwardIterator it2 = first;
//         ForwardIterator next_it = std::next(it2);
//
//         while (next_it != last) { // 두 번째 반복자
//             if (comp(*next_it, *it2)) { // 조건에 따라 교환
//                 std::iter_swap(it2, next_it);
//             }
//             ++it2;
//             ++next_it;
//         }
//     }
// }
// class compGreater { // 오름차순 정렬에 사용
//     // functor로 구현(두 정수 비교 결과를 bool 타입으로 리턴, operator( ) 구현)
// public:
//     bool operator() (int x, int y) {
//         return x < y;
//     }
// };
// class compLess { // 내림차순 정렬에 사용
//     // functor로 구현(두 정수 비교 결과를 bool 타입으로 리턴, operator( ) 구현)
// public:
//     bool operator() (int x, int y) {
//         return x > y;
//     }
// };
// int main() {
//     std::forward_list<int> values{ 7, 0, 6, 1, 5, 2, 4, 3 };
//     std::cout << "오름차순 정렬" << std::endl;
//     // bubble sort 사용하여 오름차순 정렬 후 결과 출력
//     bubble_sort(values.begin(), values.end(), compGreater());
//     for (auto& value : values) {
//         std::cout << value << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "내림차순 정렬" << std::endl;
//     // bubble sort 사용하여 내림차순 정렬 후 결과 출력
//     bubble_sort(values.begin(), values.end(), compLess());
//     for (auto& value : values) {
//         std::cout << value << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }