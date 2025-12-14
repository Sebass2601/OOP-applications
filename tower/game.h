/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 * 
 * @author
 *   Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#pragma once
#include <vector>
#include "stack.h"

using namespace std;

class Game {
    public:
        Game();
        void solve();
        void _legalmove(int a, int b);
        void _move(int origin, int destination);
        friend ostream& operator<<(ostream & os, const Game & game);

    private:
        vector<Stack> stacks_;

};