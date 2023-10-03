// Nilo Marks
// nilomarks34@csu.fullerton.edu
// @NighLow
// Partners: @RyanKossick
//
// units.cc
//

#include <iostream>
#include <string>

#include "units_functions.h"

int main(int argc, char const *argv[]) {
  double milliliter_value{0.0};

  std::cout << "Enter ml: ";
  std::cin >> milliliter_value;

  double tsp_value = MlToTsp(milliliter_value);
  double tbsp_value = MlToTbsp(milliliter_value);
  double ounce_value = MlToOz(milliliter_value);
  double cup_value = MlToCup(milliliter_value);

  std::cout << milliliter_value << " ml = " << tsp_value
            << " tsp = " << tbsp_value << " tbsp = " << ounce_value
            << " oz = " << cup_value << " cups" << '\n';
  return 0;
}
