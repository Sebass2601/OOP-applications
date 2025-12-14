

#include <vector>
#include "cube/Cube.h"

using namespace std;
using seb::Cube;

#pragma once


class Stack {
    public:
        void push_back(const Cube& cube);
        Cube removeTop();
        Cube& peekTop();
        unsigned size() const;

        friend ostream& operator<<(ostream& os, const Stack& stack);

    private:
        vector<Cube> cubes_;

};


