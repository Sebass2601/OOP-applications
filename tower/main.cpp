/**
 * Simple main to create and solve a game of the Tower of Hanoi puzzle.
 * 
 * @author
 *   Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#include <iostream>

#include "game.h"

using namespace std;

int main() {
  Game g;

  cout << "Initial game state: " << endl;
  cout << g << endl;

  g.solve();

  cout << "Final game state: " << endl;
  cout << g << endl;

  return 0;
}