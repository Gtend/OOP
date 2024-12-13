/* Type Conversion in C++
# static_cast
 - 컴파일 타임 변환
 - fast : runtime에 추가 검증 없음
 - 런타임에서 실제 할당된 타입에 대한 정보 없음
# dynamic_cast
 - 런타임 변환
 - 런타임 타입 정보 (RTTI) 필요 virtual 함수 or 소멸자 필요 -> vtable 생성
 - slow : RTTI 파싱, 추가 검증
 성능 중요한 앱에서는 사용금지

# 업캐스팅
 upcasting발생으로 인해 Base의 클래스의 멤버만 접근 가능
 upcasting 방법 (포인터, 참조, 명시적, casting)
 -
 -
 -
 -

# 다운캐스팅
 downcasting 방법 ()
 -
 -
 -
 가상 소멸자 or 가상 함수 있으면 dynamic_cast가능 (가상함수 -> RTTI활성화)
 - 부모를 자식으로 다운캐스팅시
   static_cast : 부모 멤버는 접근가능, 자식 멤버는 접근은 가능하나 메모리 corruption
   dynamic_cast : nullptr

# 다형적 클래스에서의 dynamic cast(RTTI)
 ptr -> vtable
 다형이지 않은 클래스에서의 dynamic cast
 ptr -> 첫번째 멤버변수 -> 럼타임 크래시 발생

 ->c++은 포인터가 다형적,비다형적 클래스를 가리키는지 여부 판별 방법 x

# CaVer(CastVerifier)
 P* ptr = new P;
 static_cast<D*>(prt)
 THTable -> P와 D 클래스 사이의 관계 확인
 Runtime type tracing -> ptr이 실제로 가리키는 것이 P인지 D인지 확인

 Type Hierarchy Table
 hashed / unrolled
 */


