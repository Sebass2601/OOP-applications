/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 * Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#include "Cube.h"
#include "HSLAPixel.h"
#include <iostream>

namespace seb {  
  Cube::Cube(double length, seb::HSLAPixel color) {
    length_ = length;
    color_ = color;
  }

  double Cube::getLength() const {
    return length_;
  }

  double Cube::getVolume() const {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
