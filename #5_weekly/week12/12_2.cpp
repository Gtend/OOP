// #include <iostream>
// /* ....(실습1)에서 구현된 template swap ....*/
//
// template<typename T, typename U>
// void swap(T& t, U& u ) {
//     T temp = t;
//     t = u;
//     u = temp;
// }
// template<>
// void swap<std::string&, std::string&>(std::string& str, std::string& str2) {
//     //std::swap(str, str2);
//     std::string temp = str;
//     str = str2;
//     str2 = temp;
// }
// /* ... (추가) template swap의 string type specialization ... */
// int main() {
//     int a = 1;
//     int b = 2;
//     float c = 3.3;
//     float d = 4.4;
//     std::string e = "World";
//     std::string f = "Hello";
//     swap<int>(a, c); //swap(a,b)도 가능
//     swap<float>(c, d); //swap(c,d)도 가능
//     //(추가) e, f의 swap이 가능하도록 swap template 호출
//     swap<std::string>(e, f);
//     std::cout << "a: " << a << ", b: " << b << std::endl;
//     std::cout << "c: " << c << ", d: " << d << std::endl;
//     std::cout << "e: " << e << ", f: " << f << std::endl;
//     return 0;
// }