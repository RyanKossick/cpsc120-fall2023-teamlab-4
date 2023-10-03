// Nilo Marks
// nilomarks34@csu.fullerton.edu
// @NighLow
// Partners: @RyanKossick
//
// units_functions.cc
//

#include "units_functions.h"

// Convert milliliters to teaspoons
double MlToTsp(double volume) {
  double tsp = volume / 4.929;
  return tsp;
}

// Convert milliliters to tablespoons
double MlToTbsp(double volume) {
  double tbsp = MlToTsp(volume) / 3;
  return tbsp;
}

// Convert milliliters to fluid ounces
double MlToOz(double volume) {
  double ounces = MlToTbsp(volume) / 2;
  return ounces;
}

// Convert milliliters to cups
double MlToCup(double volume) {
  double cups = MlToOz(volume) / 8;
  return cups;
}
