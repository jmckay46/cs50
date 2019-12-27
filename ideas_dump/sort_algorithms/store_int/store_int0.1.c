#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

//this program simply stores command line arguments into an array & prints the list.

int main(int argc, string argv[])
{
    string list[argc-1];
    //take command line arguments and store it in list[]
    for(int i =0; i <= argc-1; i++)
    {
        list[i] = argv[i+1];
    }
    //print the unsorted list
    for(int i = 0; i <= argc-1; i++)
    {
        printf("%s\n", list[i]);
    }

}