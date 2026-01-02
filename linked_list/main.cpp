#include <iostream>
#include "list.h"
#include "list.hpp"

using namespace std;

int main() {
    
    list<int> list;

    list.insertAtFront(3);

    cout << list[0] << endl;

    list.insertAtFront(30);

    cout << list[0] << endl;
    cout << list[1] << endl;
    

    return 0;
}
