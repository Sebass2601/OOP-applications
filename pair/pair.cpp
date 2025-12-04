#include <iostream>

using namespace std;

// Definition of Pair class

class Pair {
    public:
      int a;
      int b;
      int sum() {
  
        return a + b;
  
      }
  };
  
  
  
  
  
  //  Main execution of the program
  
  int main() {
    Pair p;
    p.a = 100;
    p.b = 200;
    if (p.a + p.b == p.sum()) {
      std::cout << "Success!" << std::endl;
    } else {
      std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
    }
    return 0;
  }