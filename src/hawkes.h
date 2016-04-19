
#ifndef HAWKES_H
#define HAWKES_H

#include <memory>

// the Hawkes process and all related
namespace Hawkes {

  // dataset container
  // todo: find more elegant solution (sql database?)
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
    size_t _dim;

  public:
    Model(size_t dim);
    ~Model() {};

    // non-modifying operations
    const size_t& dim() const { return _dim; }

    // modifying operations

  };

  typedef std::unique_ptr<Model> model_ptr;

  // estimation class
  // todo: other estimation methods
  class Estimate
  {
  private:
      const model_ptr& _model;
  public:
      Estimate(const model_ptr& model);
      ~Estimate() {};
  };

  // simulate class
  // todo: other simulation methods
  class Simulate
  {
  private:
      const model_ptr& _model;
  public:
      Simulate(const model_ptr& model);
      ~Simulate() {};
  };

}

#endif
