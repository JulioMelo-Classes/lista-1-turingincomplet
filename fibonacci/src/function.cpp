#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
  std::vector<unsigned int> v;
        int x = 1, y = 1, z = 0;
        while( x < n) {
            v.push_back(x);
            z = x + y;
            x = y;
            y = z;
    }
    return v;
}