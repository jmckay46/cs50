#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>


int main(int argc, string argv[])
{
    string list[argc-1];

    for(int i =0; i <= argc-1; i++)
    {
        list[i] = argv[i+1];
    }

    for(int i = 0; i <= argc-1; i++)
    {
        printf("%s\n", list[i]);
    }

}