#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define ASCII_LWRCASE_INDEX 97
#define ASCII_UPRCASE_INDEX 65
#define A_TO_Z 26

char cipher(char cin, int key);

char charIndex=0;

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s\n", argv[0]);
        return 1;
    }
    else
    {
        string text = get_string("plaintext: ");
        int key = atoi(argv[1]);

        for(int n = 0; n < strlen(text); n++)
        {
            text[n] = cipher(text[n], key);
        }
        printf("ciphertext: %s\n", text);
        return 0;
    }

}//end main

char cipher(char cin, int k)
{
    if(isupper(cin))
    {
        cin -= ASCII_UPRCASE_INDEX;
        cin = (cin + k) % A_TO_Z;
        cin += ASCII_UPRCASE_INDEX;
        charIndex++;
    }
    else if(islower(cin))
    {
        cin += ASCII_LWRCASE_INDEX;
        cin = (cin + k) % A_TO_Z;
        cin += ASCII_LWRCASE_INDEX;
        charIndex++;
    }
    else if(isspace(cin))
    {
        printf(" ");
    }
    else if(ispunct(cin))
    {
        printf("%c", cin);
    }
    return cin;
}