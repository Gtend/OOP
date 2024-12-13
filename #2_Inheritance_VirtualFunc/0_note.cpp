/*
# 상속 시 생성자 / 소멸자 호출 순서

# virtual 이 없으면 부모 소멸자만 호출됨
 -> Parent* parent = new Child();

# pure virtual func
 - virtual void func() = 0;
 - 모든 자식 클래스에서 override 무조건 되어야함

# Abstract Class : 한개 이상의 순수 가상 함수 갖는 클래스
  -> 직접적으로 인스턴스 만들 수 없음

# Polymorphism(다형성)
 : 동일한 것이 다른 맥락에서 다른 의미를 가질 수 있는 특성
 : 한 클래스가 그로부터 파생된 다양한 형태를 가질 수 있음

 런타임에 발생하는 다형성 = 런타임 (동적) 다형성 = run-time (dynamic) polymorphism
 -> 다형적 함수 호출(dynamic dispatch)
 포인터, 참조를 통해 멤버함수 호출 시 실제 호출은 포인터, 참조가 가리키는
 객체의 dynamic 타입에 의해 결정되도룩..

# Virtual Function : 다형성을 가진 멤버 함수
 참조, 포인터를 통해 가상함수 호출 시 객체의 동적타입에 따라 결정
# keyword : virtual
 virtual 선언 하면 파생클래스에는 자동으로 가상함수 됨

Polymorphic class : 가상함수가 하나라도 있는 클래스
 */
