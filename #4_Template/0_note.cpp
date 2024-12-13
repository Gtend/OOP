/*
# Generic Programming : 나중에 지정될 타입을 기반으로 작성된 알고리즘
 -> use Template !!

# auto : 알아서 타입 감지

# constexpr : 컴파일 타임에 상수계산
# const : 런타임에 상수 계산 가능, 초기화는 되어야함.

# 타입 파라미터 : template <typename T>
# 비타입 파라미터 : template <int n>
   -> 비타입파라미터는 컴파일 타임에 결정가능해야함

# template function이 인스턴스화 됐을떄 컴파일러가 코드 만듦.
    - Qualified Name : ex) std::cout
    - Dependent Name : template parameter에 의존 T::value
    - Qualified Dependent Name : typename std::vector<T>::value

# 탬플릿 특수화
    function template : can only explicitly specialized
    class template : partially or explicitly

# 가변인자 template
    선언 : template <typename... Args>
    예제 :
        template <typename T>
        auto sum(T x) {
            return x;
        }

        template <typename T, typename... Args>
        auto sum(T x, Args... args) {
            return x + sum(args...);
        }

# fold
    auto sum(T x, Args... args) {
            return x + (... + args);
        }

# Functor
    함수처럼 호출될 수 있는 객체
    클래스 내 operator() 연산자를 오버로드
    일반 함수와 비슷한 방식으로 호출되지만, 상태 정보를 포함할 수 있는 객체
    ex)
    class IsGreater {
    public:
        IsGreater(int threshold) : threshold_(threshold) {}
        bool operator() (int x) const {
            return x > threshold_;
        }
    IsGreater isGreater(5);

# Tailing return type (decltype)
    template <typename FirstType, typename SecondType>
    auto AddArbitary(FirstType t1, SecondType t2) -> decltype(t1 + t2) {
        return t1 + t2;
    }

# 컴파일 타임 문제
static const int res = Factorial<num-1>::res* num;

# Phantom Type
typedef unsigned int TModelID;
typedef unsigned int TAnimationID;
template <typename Phantom_TYPE>

# 탬플릿을 이용한 객체 연산
    -> operator 오버로딩 : T operator@(const T&)
    Vector operator+(const Vector& v) const {
        return Vector(x + v.x)
    }
 */