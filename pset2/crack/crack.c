#include<cs50.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>

#define _XOPEN_SOURCE
#define SIZE strlen(argv[1])

int main(int argc, string argv[])
{
    if(argc != 1 || argc > SIZE)
    {
        printf("Usage: %s\n", argv[0]);
        return 1;
    }
    else
    {
        printf("%i", argc);
    }
}
