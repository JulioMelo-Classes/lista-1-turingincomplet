//#include "function.h"
#include <array>
#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse(std::array< std::string, SIZE >& arr)
{
    long int s=0, e=SIZE - 1;
    for (; s < e; s++, e--) {
        swap(arr[s], arr[e]);
    }
}
