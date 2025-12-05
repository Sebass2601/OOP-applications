#include <iostream>

// PAIR OBJECT DEFINITION
class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    std::cout << "Correct assignment." << std::endl;
  }
};

// PAIR OBJECT CREATION IN THE HEAP USING POINTERS

Pair* pairFactory() {
  Pair* p = new Pair;
  p->first = 5;
  p->second = 3;
  
  return p;
}

// MAIN FUNCTION

int main() {
  Pair *p;
  p = pairFactory();
  
  // This function call should work without crashing:
  p->check();
  
  // Deallocating the heap memory.
  delete p;

  std::cout << "If you can see this text, the system hasn't crashed yet!" << std::endl;  

  return 0;
}
