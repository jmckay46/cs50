#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*          This program prompts the user for a text and
            uses vigeneres' algorithm to cipher plain text
                                                                */

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
        printf("Usage: ./vigenere k\n");
    }

}//end main

void cipher(string text, string s_key)
{
    int count = 0;

    printf("ciphertext: ");

    for (int n = 0; n < strlen(text); n++)
    {
        int ci_text = (int) text[n] + (int) s_key[n];                   //add the integer values of text[nth] value and the key
        char c_text = (char) ci_text;                                   //convert the ciphered text value into a character
        int sc_key = (int) s_key[n = strlen(s_key)];

            if(isupper(text[n]))
            {
                if(count < strlen(s_key))
                {
                    ci_text = ci_text % 26;

                        if(ci_text < 25)
                        {
                            c_text = c_text + 65;
                            printf("%c", c_text);
                        }
                        else
                        {
                            c_text = c_text + 65;
                            printf("%c", c_text);
                        }
                    count ++;
                }

                else                                                                                  //when we reached the end of the string lengths key, then take the [nth + string length] to access the character after the given interval
                {
                    ci_text = (int) text[n + strlen(s_key)] + strlen(s_key);
                    ci_text = ci_text - 65;
                    ci_text = ci_text % 26;

                        if(ci_text < 25)
                        {
                            c_text = sc_key + 65;
                            printf("%c", c_text);
                        }
                        else
                        {
                            c_text = c_text + 65;
                            printf("%c", c_text);
                        }
                }
         }//end of if0

         if(islower(text[n]))
            {
                if(count < strlen(s_key))
                {
                    ci_text = (int) text[n] + (int) s_key[n] - 97;
                    ci_text = ci_text % 26;

                    if(ci_text < 25)
                    {
                        c_text = c_text + 97;
                        printf("%c", c_text);
                    }
                     else
                    {
                        c_text = c_text + 97;
                        printf("%c", c_text);
                    }
                    count ++;
                }

                else                                                                 //when we reached the end of the string lengths key, then take the [nth + string length] to access the character after the given interval
                {
                    ci_text = (int) text[n + strlen(s_key)] + strlen(s_key) + (int) s_key[n - strlen(s_key)] - 65;
                    ci_text = ci_text % 26;

                    if(ci_text < 25)
                    {
                        c_text = c_text + 65;
                        printf("%c", c_text);
                    }
                    else
                    {
                        c_text = c_text + 65;
                        printf("%c", c_text);
                    }
                }
         }

        else if(isspace(text[n]))
        {
            printf(" ");
        }

    }//end for
}//end cipher