

#ifndef structTour_h
#define structTour_h
#include <vector>
#include "structCity.hpp"

using std::vector;

struct tour{
    vector<struct city> path;
    int distance;
};

#endif /* structTour_h */
