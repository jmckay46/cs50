#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 65535

//this file is intented to store a list of integers into a list of array using command line arguments

int main(int argc, string argv[])
{
    int n = atoi(argv[1]);                  //n is the random integer variable being stored into our unsorted array
    int list[MAX];

    for(int i =0; i <= MAX; i++)            //store each element in array
    {
        list[i] = n;
    }

    int cnt = 0;

    while(list[cnt] != '\n')
    {
        printf("%i\n", list[cnt]);
        cnt++;
    }

}