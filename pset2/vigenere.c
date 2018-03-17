#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/****           This program prompts the user for a text and
                uses vigeneres' ciphering algorithm to cipher
                plain text                                               ****/
    /*          Seems to be an issue with the key values                    */

void cipher(string text, string s_key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string p_text = get_string("plaintext: ");
        string key = argv[1];
        cipher(p_text, key);
        printf("\n");
    }
    else
    {
        printf("Usage: ./vigenere k");
    }

}

void cipher(string text, string s_key)
{
    int count = 0;

    printf("ciphertext: ");

    for (int n = 0; n < strlen(text); n++)
    {
        if(isupper(text[n]))
         {
            if(count < strlen(s_key))
            {
                int s_keyi = (int) s_key[n] - 65;
                int ci_text = (int) text[n] - 65;
                ci_text = ci_text + s_keyi;
                ci_text = ci_text % 26;

                if(ci_text < 25)
                {
                    char c_text = (char) ci_text + 65;
                    printf("%c", c_text);
                }
                 else
                {
                    char c_text = (char) ci_text + 65;
                    printf("%c", c_text);
                }

                count ++;
            }

            else                                                                 //when we reached the end of the string lengths key, then take the [nth + string length] to access the character after the given interval
            {
                int ci_text = (int) text[n + strlen(s_key)] + strlen(s_key);
                int sc_key = (int) s_key[n - strlen(s_key)] - 65;                                 //this is text[n + strlen of key]
                ci_text = ci_text + sc_key;
                ci_text = ci_text % 26;

                if(ci_text < 25)
                {
                    char c_text = (char) ci_text + sc_key + 65;
                    printf("%c", c_text);
                }
                else
                {
                    char c_text = (char) ci_text + 65;
                    printf("%c", c_text);
                }
            }
         }

         else if(islower(text[n]))
         {
            if(count < strlen(s_key))
            {
                int s_keyi = (int) s_key[n] - 97;
                int ci_text = (int) text[n] - 97;
                ci_text = ci_text + s_keyi;
                ci_text = ci_text % 26;

                if(ci_text < 25)
                {
                    char c_text = (char) ci_text + 97;
                    printf("%c", c_text);
                }
                 else
                {
                    char c_text = (char) ci_text + 97;
                    printf("%c", c_text);
                }

                count ++;
            }

            else                                                                 //when we reached the end of the string lengths key, then take the [nth + string length] to access the character after the given interval
            {
                int ci_text = (int) text[n + strlen(s_key)] + strlen(s_key);
                int sc_key = (int) s_key[n - strlen(s_key)] - 65;                                 //this is text[n + strlen of key]
                ci_text = ci_text + sc_key;
                ci_text = ci_text % 26;

                if(ci_text < 25)
                {
                    char c_text = (char) ci_text + sc_key + 65;
                    printf("%c", c_text);
                }
                else
                {
                    char c_text = (char) ci_text + 65;
                    printf("%c", c_text);
                }
            }
         }

        else if(isspace(text[n]))
        {
            printf(" ");
        }

    }
}//end cipher
