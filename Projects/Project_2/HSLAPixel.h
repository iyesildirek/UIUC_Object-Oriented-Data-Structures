/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel{
	  public:
	  double h; //hue of the pixel in degrees between 0 and 360 using a double
	  double s; //saturation of the pixel as a decimal value between 0.0 and 1.0 using a double
	  double l; //luminance of the pixel as a decimal value between 0.0 and 1.0 using a double
	  double a; //alpha channel (blending opacity) as a decimal value between 0.0 and 1.0 using a double
	  
	  private:
	  
  };

}
