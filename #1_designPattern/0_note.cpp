/* 디자인 패턴 (Creational / Structual / Behavioral)

# Template Method(Behavioral)
 - 추상클래스 구현한 base클래스

# Decorator (Structual)
 - 원본클래스를 수정하지 않고 기능추가
 - 부모 : 인터페이스(Shape)
 - 자식 : ShapeA, ShapeB, Decorator(have Shape* shape)

# Singleton (Creational)
 - 인스턴스 하나만 생성. 모든 클라이언트에게 동일한 인스턴스 반환, Global 접근
 - static object / private constructor / static method

# FacotryMethod (Creational)
 - 인터페이스(Factory class)를 사용해 객체 생성 (client <-> library)
 - Factory class / 객체생성함수

# Strategy (Behavioral)
 - 알고리즘의 집합을 정의하고, 각각을 캡슐화하며, 서로 교체 가능하도록 만듦
 -> 별도의 클래스에서 다른 클래스의 operation 사용
 - 런타임에 알고리즘 바꿀 수 있음
 - Context(have Strategy 포인터) / Strategy / StrategyA..

# Observer(Behavioral)
 - 객체 간 일대다 관계를 정의
 - 한 객체의 상태가 변경되면 다른 객체들도 notify(Subject), update(Observer)
 - Observer(Abstract) / Subject(have Observer포인터배열, notify, attach)

# Adapter (Structual)
 - 기존 클래스를 새로운 인터페이스로 감쌈(wrap)
 - 기존 코드 <-adapter-> 새로운 코드 연결
 - client -> adapter interface -> product

# Bridge (structual)
 - 구현부와 추상부를 분리하여 서로 독립적으로 확장할 수 있도록 설계
 - Abstraction / Implementor(DrawAPI)

# AbstractFactory (Creational)
 - 객체생성을 factory라는 클래스 여러개를 통해서 함
 - 관련 제품군을 생성하기 위한 인터페이스 제공 패턴
 - AbstractFactory -> FactoryA FactoryB..

# Builder (Creational)
 - 분리된 부품들을 결합해서 객체 생성
 - Director / Builder / Product

# MVC
 - Model / View / Controller

# Fly weight


 */