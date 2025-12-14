/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 * 
 * @author
 *   Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#include "game.h"
#include "stack.h"
#include "cube/Cube.h"
#include "cube/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;

// Solves the Tower of Hanoi puzzle.
void Game::solve() {
  // Prints out the state of the game:
  cout << *this << endl;

  unsigned int first_stack_size = stacks_[0].size();

  while(stacks_[2].size() != first_stack_size) {
    _legalmove(0, 1);
    _legalmove(0, 2);
    _legalmove(1, 2);
    cout << *this << endl;
  }
}

void Game::_move(int origin, int destination) {
    Cube cube = stacks_[origin].removeTop();
    stacks_[destination].push_back(cube);
}

void Game::_legalmove(int a, int b) {

    if (stacks_[b].size() == 0) {
        _move(a, b);
    }

    else if (stacks_[a].size() == 0) {
        _move(b, a);
    }

    else if (stacks_[b].peekTop().getLength() > stacks_[a].peekTop().getLength()) {
        _move(a, b);
    }

    else {
        _move(b, a);
    }
}

// Default constructor to create the initial state:
Game::Game() {
  // Create the three empty stacks:
  for (int i = 0; i < 3; i++) {
    Stack stackOfCubes;
    stacks_.push_back( stackOfCubes );
  }

  // Create the four cubes, placing each on the [0]th stack:
  Cube blue(4, seb::HSLAPixel::BLUE);
  stacks_[0].push_back(blue);

  Cube orange(3, seb::HSLAPixel::ORANGE);
  stacks_[0].push_back(orange);

  Cube purple(2, seb::HSLAPixel::PURPLE);
  stacks_[0].push_back(purple);

  Cube yellow(1, seb::HSLAPixel::YELLOW);
  stacks_[0].push_back(yellow);
}

ostream& operator<<(ostream& os, const Game& game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}
