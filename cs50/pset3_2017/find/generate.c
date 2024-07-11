/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // if we we don't have 2 and 3 command line arguments, then print the error message.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // store the second command line argument as an array, n.
    int n = atoi(argv[1]);

    //initialize the seed as the third command line argument as a long integer.
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else                                    //else, then set the seed as a long integer based on the time in seconds from Jan. 1st, 1970.
    {
        srand48((long) time(NULL));
    }

    //generate the random integer and print it n times
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
