#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 65535

//this file is intented to store a list of integers into a list of array using command line arguments

int main(int argc, string argv[])
{
    int i = 1;
    int n = atoi(argv[i]);                  //n is the random integer variable being stored into our unsorted array
    int list[argc-1];

    for(int s =0; s <= MAX; s++)            //store each element in array
    {
        list[s] = atoi(argv[i]);
        i++;
    }

    int cnt = 0;

    while(list[cnt] != '\n')
    {
        printf("%i\n", list[cnt]);
        cnt++;
    }

}