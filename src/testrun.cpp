
#include "hawkes.h"
#include <iostream>
#include <memory>
#include <vector>

int main()
{

  auto dataset = std::make_shared<Hawkes::Data>;

  const int num_components = 5;
  auto hawkes_model = std::make_unique<Hawkes::Model>(num_components);
  auto hawkes_estimator = std::make_unique<Hawkes::Estimate>(hawkes_model);
  auto hawkes_simulator = std::make_unique<Hawkes::Simulate>(hawkes_model);

  // std::vector< std::unique_ptr<float> > test;
  // test.push_back(std::make_unique<float>(2.09));
  // test.push_back(std::make_unique<float>(7.6));
  // test.push_back(std::make_unique<float>(0.2));
  // test.push_back(std::make_unique<float>(2.3));
  // test.push_back(std::make_unique<float>(6.3));
  //
  // for(const std::unique_ptr<float> &nyan : test)
  // {
  //     std::cout << *nyan << std::endl;
  // }

  return 0;
}
