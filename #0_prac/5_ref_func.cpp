// #include <iostream>
//
// //int func(int &a) {return a;}
// int& func(int &a) {return a;}
//
// int main() {
//     int x = 1;
//     std::cout << func(x)++ << std::endl;
//     std::cout << x << std::endl;
//     //getchar();
//     int num = 1024;
//     int& ref = num;
//     func(ref);
//     std::cout << ref << std::endl;
//     ref++;
//     std::cout << ref << std::endl;
//     std::cout << num << std::endl;
//
//     int *p = &num;
//     (*p)++;
//     std::cout << *p << std::endl;
//
//     int& ref2 = ref;
//     ref2++;
//     std::cout << " -- " << std::endl;
//     std::cout << ref2 << std::endl;
//     std::cout << ref << std::endl;
//     std::cout << num << std::endl;
// }
