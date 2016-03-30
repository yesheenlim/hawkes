
#ifndef HAWKES_H
#define HAWKES_H

#include <boost/shared_ptr.hpp>

// the Hawkes process and all related
namespace Hawkes {

  // data container
  class Data
  {
  private:

  public:
    Data();
    ~Data() {};
  };

  // the model itself
  class Model
  {
  private:
    int dim;

  public:
    Model(int dim);
    ~Model() {};

    // modifying operations

    // non-modifying operations

  };

  typedef boost::shared_ptr<Model> model_ptr;

  // Hawkes kernel and mu estimation
  void Estimate(model_ptr model);
  
  // to simulate the process
  void Simulate(model_ptr model);

}

#endif
