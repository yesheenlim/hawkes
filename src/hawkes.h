
#ifndef HAWKES_H
#define HAWKES_H

// the Hawkes process and all related
namespace Hawkes {

  // data container
  class Data
  {
  private:

  public:
    Data();
    ~Data();
  }

  // the model itself
  class Model
  {
  private:
    int dim;

  public:
    Model(int dim);
    ~Model();

    // modifying operations

    // non-modifying operations

  };

  // Hawkes kernel and mu estimation
  class Estimate
  {
  private:
    Model* model;

  public:
    Estimate(Model* model);
    ~Estimate();

    // non-modifying operations

  };

  // to simulate the process
  class Simulate
  {
  private:
    // class variables
    Model* model;

  public:
    Simulate(Model* model);
    ~Simulate();

    // non-modifying operations

  };

}

#endif
