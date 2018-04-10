#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define ASCII_UPRCASE_INDEX 65
#define ASCII_LWRCASE_INDEX 97
#define A_TO_Z 26
#define KEY_SIZE strlen(key)

char cipher_text(char cin, string key);
int charIndex = 0;

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string text = get_string("plaintext: ");
        string k = argv[1];

        for (int n = 0; n < strlen(text); n++)
        {
           text[n] = cipher_text(text[n], k);
        }

        printf("%s\n", text);
        return 0;
    }
    else
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

}//end main

char cipher_text(char cin, string key)
{
        int keyIndex;

        if(isupper(key[charIndex % KEY_SIZE]))
        {
            keyIndex = key[charIndex % KEY_SIZE] - ASCII_UPRCASE_INDEX;
        }
        else
        {
            keyIndex = key[charIndex % KEY_SIZE] - ASCII_LWRCASE_INDEX;
        }

        if(isupper(cin))
        {
            cin -= ASCII_UPRCASE_INDEX;                                  //set the uppercase character to zero
            cin = (cin + keyIndex) % A_TO_Z;                        //add the key value and mod by 26 letters
            cin += ASCII_UPRCASE_INDEX;                                  //reset the ASCII valu
            charIndex ++;
        }
        else if(islower(cin))
        {
            cin -= ASCII_LWRCASE_INDEX;
            cin = (cin + keyIndex) % A_TO_Z;
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
}//end cipher_text