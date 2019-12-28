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

    if(n < 1)
    {
        return false;
    }

    for(int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <(n-i-1); j++)
        {
            if(values[j] > values[j+1])
            {
                int tmp = values[j];
                values[j] = values[j+1];
                values[j+1] = tmp;
            }
        }
    }
    return;
}
