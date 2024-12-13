// #include <iostream>
// #include <vector>
//
// int main() {
//     std::vector<int> vec;
//     vec.push_back(11);
//     vec.push_back(22);
//     vec.push_back(33);
//     vec.push_back(44);
//
//     for(int i =0; i<vec.size(); i++) {
//         std::cout << vec[i] << std::endl;
//     }
//
//     // Vecotor is bidirectional Iterator
//     std::vector<int>::iterator it;
//     it++;
//     it--;
//     it+5;
//     //std::vector<int>::iterator it2;
//     //it2 = vec.begin();
//     //it2 = vec.end();
//     std::cout << *it2 << std::endl;
//     // iterator 사용
//     std::vector<int>::iterator itr;
//     for (itr = vec.begin(); itr != vec.end(); ++itr) {
//         std::cout << *itr << std::endl;
//     }
//
//     // range-based for loop
//     for(auto& element : vec) {
//         std::cout << element << std::endl;
//     }
//
//
//  }