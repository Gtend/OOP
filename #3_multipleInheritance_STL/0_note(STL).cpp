/*
## standard Template Library (STL)
 Template를 사용해 구현된 Container의 집합

# Container : 다양한 타입 객체 저장
 Sequential Container
  - vector : expendable array
  - list : double linked list
  - dequeue : double-ended queue
  - stack
  - set
  - map
 Associative Container
  - set
  - map
 Derived Container
  - stack, queue 등

# Iterator : Container에 있는 content 접근
# Algorithm : iterator를 사용한 알고리즘

# iterator 사용
    std::vector<int>::iterator itr;
    for (itr = vec.begin(); itr != vec.end(); ++itr) {
        std::cout << *itr << std::endl;
    }
# range-based for loop
    std::vector<int> vec;
    for(auto& element : vec) {
        std::cout << element << std::endl;
    }
*/
