
#include "hawkes.h"
#include <iostream>
#include "boost/shared_ptr.hpp"

int main()
{
  boost::shared_ptr<Hawkes::Model> hawkes_model(new Hawkes::Model(5));
  Hawkes::Estimate(hawkes_model);
  Hawkes::Simulate(hawkes_model);

  return 0;
}
