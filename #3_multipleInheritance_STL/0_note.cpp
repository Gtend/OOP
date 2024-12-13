/*
# Multiple Inheritance(MI) : 하나이상의 부모클래스 상속
  -> problem.. 이름 충돌문제 발생
  -> Scope resolution operator (::) 사용

# Dreaded Diamond 상속 : 부모의 부모로 바로 업캐스팅 불가능
  -> 생성자 호출 순서
    Animal::Animal()
    Cat::Cat()
    Animal::Animal()
    Dog::Dog()
    DogCat::DogCat()
# virtual 상속 : 부모의 부모로 바로 상속 가능
  ex) class Cat : public virtual Animal
  -> 생성자 호출 순서
    Animal::Animal()
    Cat::Cat()
    Dog::Dog()
    DogCat::DogCat()


# 인터페이스 : 모든 메서드가 순수 가상함수 + 멤버 변수 x
# 추상클래스 : 순수 가상 함수 하나 이상 존재
# 다형적 클래스 : 가상함수 하나 이상
  ->다형적클래스 > 추상클래스 > 인터페이스

# RAII :
자원의 할당과 해제를 객체의 생성자와 소멸자에서
자동으로 관리하여 안정성과 예외 안전성을 보장하는 개념

# Smart pointer (unique_ptr, shared_ptr, weak_ptr)
  - unique_ptr
    std::unique_ptr<Test> test3;
    std::unique_ptr<Test> test3(new Test);
    불가능 std::unique_ptr<Test> test3 = new Test();

  - shared_ptr
  - weak_ptr
 */
