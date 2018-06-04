/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */



 /* Your implementation must return false immediately if n is non-positive.
    Your implementation must return true if value is in values and false if value is not in values.
    The running time of your implementation must be in O(log n).
*/

//this function returns true when you find the 'needle' in the 'haystack'
//the needle in find.c is the value we are looking for.
//values[n] is the number of values in the haystack.

bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (value == values[n])
    {
        return true;
    }
    else if (values != values[n] && n < 0)
    {
        return false;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
