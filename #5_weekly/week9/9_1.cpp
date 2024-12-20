// #include <iostream>
//
// class MyData {
// 	int number;
// 	std::string strNumber;
// public:
// 	MyData(int data, std::string str) : number(data), strNumber(str) {}
//
// 	//Operator conversion : 클래스를 -> int or string 타입으로 conversion
// 	operator int() { return number; }
// 	operator std::string() { return strNumber; }
//
// 	//Unary operator
// 	// postfix operator overloading
// 	int operator++(int) { //postfix operation (indicated by dummy ‘int’)
// 		int temp = number;
// 		number++;
// 		return temp;
// 	}
// 	// prefix operator overloading
// 	int operator++() { //prefix operation
// 		return ++number;
// 	}
// 	// << operator overloading  && 클래스의 private 변수접근 가능
// 	friend std::ostream& operator<<(std::ostream&, MyData&);
// };
//
// // non-member operator<< function
// std::ostream& operator<<(std::ostream& os, MyData& md) {
// 	return os << "This number is : " << md.strNumber << "\n";
// }
//
// int main() {
// 	MyData mydata(1, "one");
//
// 	std::string strNum = mydata;     // conversion(MyData 클래스 타입 -> string)
// 	int intNum = mydata;     // conversion(Mydata -> int)
//
// 	std::cout << strNum << std::endl; // one
// 	std::cout << intNum << std::endl; // 1
// 	std::cout << mydata++ << std::endl; // 1, operator overloading(postfix)
// 	std::cout << ++mydata << std::endl; // 3, operator overloading(prefix)
// 	std::cout << mydata;     // operator overloading(<<)
// }
