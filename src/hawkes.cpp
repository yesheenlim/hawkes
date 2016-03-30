
#include "hawkes.h"
#include <iostream>
#include <boost/shared_ptr.hpp>

// member function definitions
namespace Hawkes{

  typedef boost::shared_ptr<Model> model_ptr;

  // class constructor for Model
  Model::Model(int dim)
    : dim(dim)
  {
    std::cout << "Initialising Hawkes model of dimension " << dim << std::endl;

    ///// need to write error validation functions
  }

  // function to estimate model parameters
  void Estimate(model_ptr model)
  {
    std::cout << "Estimating..." << std::endl;
  }

  // function for simulating the process
  void Simulate(model_ptr model)
  {
    std::cout << "Simulating..." << std::endl;
  }

}
