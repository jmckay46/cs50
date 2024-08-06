#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext: ");
    int key = atoi(argv[1]);
    printf("%i\n", key);

    for(int i = 0, len = strlen(plaintext); i < len; i++)
    {
        plaintext[i] = plaintext[i] + key;
        printf("%s\n", plaintext);
    }

}
