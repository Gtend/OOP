// #include <iostream>
// #include <string>
// #include <vector>
//
// class Employee {
// protected:
//     std::string name;
//     int age;
// public:
//     Employee(std::string name, int age) : name(name), age(age) {}
//
//     void showInfo() {
//         std::cout << "Name : " << name << "age : " << age << std::endl;
//     }
// };
//
// class Manager : public Employee {
//     int managerBonus;
// public:
//     Manager(int managerBonus, std::string name, int age) : Employee(name, age) {
//         this->managerBonus = managerBonus;
//     }
//
//     void showInfo() {
//         std::cout << "Manager Name : " << name << "age : " << age << "bonus" << managerBonus << std::endl;
//     }
// };
//
// class Intern : public Employee {
//     std::string major;
// public:
//     Intern(std::string  major, std::string name, int age) : Employee(name, age) {
//         this->major = major;
//     }
//
//     void showInfo() {
//         std::cout << "Intern Name : " << name << "age : " << age << "major : " << major << std::endl;
//     }
// };
//
// int main() {
//     Employee** employeelist = new Employee*[3];
//     employeelist[0] = new Employee("John", 25);
//     employeelist[1] = new Manager(200,  "mana", 30);
//     employeelist[2] = new Intern("security", "John", 25);
//     employeelist[0]->showInfo();
//     employeelist[1]->showInfo();
//     employeelist[2]->showInfo();
// }
