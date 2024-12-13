// #include <iostream>
//
// class Component {
// public:
//     virtual std::string Operation() const = 0;
// };
//
// class ConcreteComponent : public Component {
// public:
//     std::string Operation() const override {
//         return "Concrete";
//     }
// };
//
// class Decorator : public Component {
// Component *component;
// public:
//     Decorator(Component *component) : component(component) {}
//     std::string Operation() const override {
//         return this->component->Operation();
//     }
// };
//
// class ConcreteDecorator : public Decorator {
//     public:
//     ConcreteDecorator(Component *component) : Decorator(component) {}
//     std::string Operation() const override {
//         return Decorator::Operation();
//     }
// };
//
// int main() {
//     Component* component = new ConcreteComponent();
//
// }