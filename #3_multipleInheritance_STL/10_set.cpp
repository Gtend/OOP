// #include <iostream>
// #include <set>
//
// int main() {
//     std::set<std::string> setOfNumbers;
//
//     setOfNumbers.insert("first");
//     setOfNumbers.insert("second");
//     setOfNumbers.insert("third");
//     setOfNumbers.insert("fourth");
//
//     std::cout << "size : " << setOfNumbers.size() << std::endl;
//
//     for(std::set<std::string>::iterator it=setOfNumbers.begin();
//         it!=setOfNumbers.end(); ++it) {
//         std::cout << *it << std::endl;
//     }
//
//     std::cout << "case2 " << std::endl;
//     for(auto& element : setOfNumbers) {
//         std::cout << element << std::endl;
//     }
// }