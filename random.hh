#pragma once
#include <random>

extern std::default_random_engine gen;
extern std::normal_distribution<double> dist;

double N(double mean, double var) {
  std::normal_distribution<double> dist(mean, var);
  return dist(gen);
}

int rndInt(uint32_t n) {
    std::uniform_int_distribution<uint32_t> dist(0,n-1);
    return dist(gen);
}
