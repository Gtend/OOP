// #include <iostream>
// #include <list>
//
// int main() {
//     std::list<char> list;
//
//     list.push_back('A');
//     list.push_back('B');
//     list.push_back('C');
//     list.push_back('D');
//     // std::cout << *list.begin() << std::endl;
//     // std::list<char>::iterator it;
//     // // list is bidirectional Iterator
//     // it++;
//     // it--;
//     // //it+5;
//
//     for(std::list<char>::iterator iter = list.begin(); iter != list.end(); ++iter) {
//         std::cout << *iter << std::endl;
//     }
//
//     for(auto& element : list) {
//         std::cout << element << std::endl;
//     }
// }