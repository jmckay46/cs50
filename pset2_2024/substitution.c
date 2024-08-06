#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(int argc, string argv[])
{
    string plaintext = get_string("plaintext: ");
    string key = argv[1];

    int key_len = strlen(argv[1]);
    int key_values[key_len];

    for(int i = 0, len = strlen(key); i < len; i++)
    {
        if(isupper(key[i]))
        {
            key_values[i] = (int) key[i] - 65;
        }
        else if(islower(key[i]))
        {
            key_values[i] = (int) key[i] - 97;
        }

        printf("%i\n", key_values[i]);
    }
}
