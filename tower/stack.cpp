/**
 * C++ class for a "stack" of cubes in a Tower of Hanoi puzzle.
 * 
 * @author
 *   Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#include <iostream>
#include <exception>
#include <vector>

#include "stack.h"



using namespace std;

void Stack::push_back(const Cube& cube) {
    if(size() > 0 && cube.getLength() > peekTop().getLength()) {
        cerr << "A smaller cube cannot be placed on top of a larger cube." << std::endl;
        cerr << "  Tried to add Cube(length=" << cube.getLength() << ")" << std::endl;
        cerr << "  Current stack: " << *this << std::endl;
        throw std::runtime_error("A smaller cube cannot be placed on top of a larger cube.");
    }

    cubes_.push_back(cube);
}

Cube& Stack::peekTop() {
    return cubes_[cubes_.size() - 1];
}

unsigned Stack::size() const {
    return cubes_.size();
}

Cube Stack::removeTop() {
    Cube cube = peekTop();
    cubes_.pop_back();
    return cube;
}

ostream& operator<<(ostream& os, const Stack& stack) {
    for(unsigned int i = 0; i < stack.size(); i++) {
        os << stack.cubes_[i].getLength() << " ";
    }
    
    os << endl;
    return os;
}