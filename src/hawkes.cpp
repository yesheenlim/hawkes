
#include "hawkes.h"
#include <iostream>
#include <memory>

// member function definitions
namespace Hawkes{

  typedef std::unique_ptr<Model> model_ptr;

  // class constructor for Data
  Data::Data()
  {
    
  }

  // class constructor for Model
  Model::Model(size_t dim)
    : _dim(dim)
  {
    std::cout << "Model constructor" << std::endl;

    ///// need to write error validation functions
  }

  // Estimate constructor
  Estimate::Estimate(const model_ptr& model)
    : _model(model)
  {
    std::cout << "Estimate constructor" << std::endl;
  }

  // Simulate constructor
  Simulate::Simulate(const model_ptr& model)
    : _model(model)
  {
    std::cout << "Simulate constructor" << std::endl;
  }

}
