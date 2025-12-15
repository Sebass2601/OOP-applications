/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Sebastian Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#pragma once

#include <iostream>

namespace uiuc {
  class Cube {
    public:
      Cube(double length);  // One argument constructor
      Cube(const Cube & obj);  // Custom copy constructor

      Cube & operator=(const Cube & obj);  // Custom assignment operator

      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

      // An overloaded operator<<, allowing us to print the Cube via `cout<<`:
      friend std::ostream& operator<<(std::ostream & os, const Cube & cube);

      bool operator >(const Cube& obj) const {

        if (length_ > obj.length_) {

          return true;

        }

        return false;

      }

    private:
      double length_;
  };
}
