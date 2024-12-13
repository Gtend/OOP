// #include <iostream>
//
// // 부품
// class Life {
// private:
//     int life;
// public:
//     Life(int life) : life(life) {}
//     int getLife() {return life;}
// };
//
// class Power {
// private:
//     int power;
// public:
//     Power(int power) : power(power) {}
//     int getPower() {return power;}
// };
//
// class Character {
// private:
//     Life* life;
//     Power* power;
// public:
//     void printInfo() {
//         std::cout << "Life: " << life->getLife() << std::endl;
//         std::cout << "Power: " << power->getPower() << std::endl;
//     }
//     void setLife(Life* life) {
//         this->life = life;
//     }
//     void setPower(Power* power) {
//         this->power = power;
//     }
// };
//
// class Builder {
// public:
//     virtual Life* buildLife() = 0;
//     virtual Power* buildPower() = 0;
// };
//
// class PicoloBuilder : public Builder {
//     public:
//     Life* buildLife() override {
//         return new Life(100);
//     }
//     Power* buildPower() override {
//         return new Power(100);
//     }
// };
//
// class SonobanBuilder : public Builder {
// public:
//     Life* buildLife() override {
//         return new Life(200);
//     }
//     Power* buildPower() override {
//         return new Power(200);
//     }
// };
//
// class Director {
// private:
//     Builder* builder;
// public:
//     Director(Builder* builder) : builder(builder) {}
//     Character* makeCharacter() {
//         Character* c = new Character();
//         c->setLife(builder->buildLife());
//         c->setPower(builder->buildPower());
//         return c;
//     }
// };
//
// int main() {
//     PicoloBuilder* pico = new PicoloBuilder();
//     SonobanBuilder* sono = new SonobanBuilder();
//
//     Director* director = new Director(pico);
//     Director* director2 = new Director(sono);
//     Character* character = director->makeCharacter();
//     Character* character2 = director2->makeCharacter();
//     character->printInfo();
//     character2->printInfo();
// }
//
//
//
