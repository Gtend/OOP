// class CParentA {
// public:
//     virtual ~CParentA() {}  // 가상 소멸자 (RTTI 활성화)
// };
//
// class CParentB {
// public:
//     virtual ~CParentB() {}  // 가상 소멸자 (RTTI 활성화)
// };
//
// class CChild : public CParentA, public CParentB {};
//
// int main() {
//     {
//         CChild c;
//         CParentA* pA = dynamic_cast<CParentA*>(&c);  // OK
//         CParentB* pB = dynamic_cast<CParentB*>(&c);  // OK
//     }
//     {
//         CParentA a;
//         CChild* pC1 = dynamic_cast<CChild*>(&a);  // NULL 반환
//         CParentB b;
//         CChild* pC2 = dynamic_cast<CChild*>(&b);  // NULL 반환
//     }
//     {
//         CChild c;
//         CParentA* pA = &c;
//         CChild* pC = dynamic_cast<CChild*>(pA);  // OK
//         CParentB* pB = dynamic_cast<CParentB*>(pA);  // OK
//     }
//     {
//         CParentA a;
//         CChild& c1 = dynamic_cast<CChild&>(a);  // 예외 발생
//         CParentB b;
//         CChild& c2 = dynamic_cast<CChild&>(b);  // 예외 발생
//     }
//
//
//
// }