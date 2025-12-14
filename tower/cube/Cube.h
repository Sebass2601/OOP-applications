/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 * Sebastian Jose Ramirez Marino <sebastianramirezmarino@gmail.com>
 */

#pragma once

#include "HSLAPixel.h"

namespace seb {
  class Cube {
    public:
      Cube(double length, HSLAPixel color);

      double getLength() const;
      void setLength(double length);

      double getVolume() const;
      double getSurfaceArea() const;

    private:
      double length_;
      HSLAPixel color_;
  };
}
