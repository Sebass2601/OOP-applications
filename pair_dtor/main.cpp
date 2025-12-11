#include <iostream>

class Pair {
  public:
    int *pa,*pb; // DECLARATION OF PUBLIC MEMBERS (VARIABLES)
    Pair(int, int); // TWO ARGUMENTS CONSTRUCTOR
    Pair(const Pair &); // COPY CONSTRUCTOR
    ~Pair(); // DESTRUCTOR
};


// METHOD IMPLEMENTATION OF PAIR CLASS

Pair::Pair(int a, int b) {
  pa = new int{a};
  pb = new int{b};
}

Pair::Pair(const Pair & obj) {
  pa = new int{*obj.pa};
  pb = new int{*obj.pb};
}

Pair::~Pair() {
  delete pa;
  delete pb;
}

 
int main() {
  Pair p(15,16);
  std::cout << "Pair created." << std::endl;
  Pair q(p);
  std::cout << "Pair copied." << std::endl;
  Pair *hp = new Pair(23,42);
  std::cout << "New pair pointer created." << std::endl;
  delete hp;
  std::cout << "Deleted pair pointer (freed memory)." << std::endl;
  return 0;
}