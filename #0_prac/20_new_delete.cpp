//
// // stack allocation vs heap allocation
//
// int main() {
//     int* p = new int;
//     *p = 1024;
//     delete p;
//
//     int a = 1024;
//     // error
//     //delete &a;
//
//     int* list = new int[10];
//     delete [] list;
//
// }
