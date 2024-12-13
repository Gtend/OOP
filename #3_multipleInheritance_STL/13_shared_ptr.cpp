// #include <iostream>
// #include <memory>
// #include <vector>
//
// class Test {
//     int *data;
//     std::weak_ptr<Test> ref;
//
// public:
//     Test() {
//         data = new int[4];
//         std::cout << "Constructor" << std::endl;
//     }
//
//     ~Test() {
//         std::cout << "Destructor" << std::endl;
//         delete[] data;
//     }
//
//     void set_ref(std::weak_ptr<Test> o) {
//         ref = o;
//     }
//
//     void access_ref() {
//         std::shared_ptr<Test> o = ref.lock();
//         if (o) {
//             std::cout << "Accessible" << std::endl;
//         } else {
//             std::cout << "No obj" << std::endl;
//         }
//     }
// };
//
// int main() {
//     std::vector<std::shared_ptr<Test>> vec;
//     vec.push_back(std::make_shared<Test>());
//     vec.push_back(std::make_shared<Test>());
//
//     vec[0]->set_ref(vec[1]);
//     vec[1]->set_ref(vec[0]);
//
//     // ref counts of pa and pb are preserved
//     std::cout << "vec[0] ref:" << vec[0].use_count() << std::endl;
//     std::cout << "vec[1] ref:" << vec[1].use_count() << std::endl;
//
//     // Accessing the object with weak_ptr
//     vec[0]->access_ref();
//
//     // Delete the last element
//     vec.pop_back();
//     vec[0]->access_ref();  // Access failure
// }
