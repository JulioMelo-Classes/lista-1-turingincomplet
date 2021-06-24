#include "function.h"

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int, int> min_max(int V[], std::size_t n)
{
    if (n == 0) {
        return { -1, -1 };
    }
    int maxv = V[0], maxi = 0, minv = V[0], mini = 0;
    for (int i = 0; i < n; i++) {
        if (V[i] >= maxv) {
            maxv = V[i];
            maxi = i;
        }
        if (V[i] < minv) {
            minv = V[i];
            mini = i;
        }

    }
    return { mini, maxi };
}