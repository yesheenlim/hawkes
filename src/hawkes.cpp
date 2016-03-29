
#include "hawkes.h"
#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>

// member function definitions
namespace Hawkes{

  // class constructor for Model
  Model::Model(int dim)
    : dim(dim)
  {
    std::cout << "Initialising Hawkes model of dimension " << dim << std::endl;

    ///// need to write error validation functions
  }

  // class constructor for Estimate
  Estimate::Estimate(Model* model)
    :model(model)
  {
    std::cout << "Estimating Hawkes model" << std::endl;
  }

  // class constructor for Model
  Simulate::Simulate(Model* model)
    :model(model)
  {
    std::cout << "Initialised simulate class" << std::endl;
  }

}
