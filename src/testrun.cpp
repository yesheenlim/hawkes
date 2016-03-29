
#include "hawkes.h"
#include <vector>
#include <iostream>
#include "boost/array.hpp"

int main()
{
  Hawkes::Model* hawkes_model = new Hawkes::Model(5);
  Hawkes::Estimate* estimate_model = new Hawkes::Estimate(hawkes_model);
  Hawkes::Simulate* hawkes_simulation = new Hawkes::Simulate(hawkes_model);

  return 0;
}
