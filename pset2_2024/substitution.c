#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext: ");
    string key = argv[1];
    printf("key: %s\n", argv[1]);
    int int_values[5];

    for(int i = 0, len = strlen(key); i < len; i++)
    {
        int_values[i] = (int) key[i];
        printf("%i\n", int_values[i]);
    }
}
