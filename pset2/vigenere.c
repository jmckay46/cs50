#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define ASCII_UPRCASE_INDEX 65
#define ASCII_LWRCASE_INDEX 97
#define A_TO_Z 26
#define KEY_SIZE strlen(key)

void cipher_text(string cin, string key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string text = get_string("plaintext: ");
        string k = argv[1];
        cipher_text(text, k);
        printf("\n");
    }
    else
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

}//end main

void cipher_text(string p_text, string key)
{
    for (int n = 0; n < strlen(p_text); n++)
    {
        char textIndex = p_text[n];
        char keyIndex;

        if(isupper(key[textIndex % KEY_SIZE]))
        {
            keyIndex = key[textIndex % KEY_SIZE] - ASCII_UPRCASE_INDEX;
        }
        else
        {
            keyIndex = key[textIndex % KEY_SIZE] - ASCII_LWRCASE_INDEX;
        }

        if(isupper(textIndex))
        {
            textIndex -= ASCII_UPRCASE_INDEX;                                  //set the uppercase character to zero
            textIndex = (textIndex + keyIndex) % A_TO_Z;                        //add the key value and mod by 26 letters
            textIndex += ASCII_UPRCASE_INDEX;                                  //reset the ASCII valu
            keyIndex++;
            printf("%c", textIndex);
        }
        else if(islower(textIndex))
        {
            textIndex -= ASCII_LWRCASE_INDEX;
            textIndex = (textIndex + keyIndex) % A_TO_Z;
            textIndex += ASCII_LWRCASE_INDEX;
            keyIndex ++;
            printf("%c", textIndex);
        }
        else if(isspace(textIndex))
        {
            printf(" ");
        }
        else if(ispunct(textIndex))
        {
            printf("%c", textIndex);
        }
    }
}//end cipher_text