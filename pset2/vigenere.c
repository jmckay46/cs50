#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void cipher_text(string pl_text, string key);

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
    }

}//end main

void cipher_text(string pl_text, string key)
{
    printf("ciphertext: ");
    int p_text;
    int key_val;
    int count = 0;
    char ci_text;

    for(int n = 0; n < strlen(pl_text); n++)
    {
        if(isupper(pl_text[n]))                     //if we run into an uppercase letter in the plain text, and immediately zero in, if isupper
        {
            p_text = (int) pl_text[n] - 65;

            if (count < strlen(key))                //do this until the end of the length of key, while pl_text[n] is an uppercase
            {
                if(isupper(key[n]))                 //zero in uppercase/lowercase key value letters
                {
                    key_val = key[n] - 65;
                }
                else if(islower(key[n]))
                {
                    key_val = key[n] - 97;
                }

                ci_text = p_text + key_val;
                ci_text = ci_text % 26;

                if(ci_text < 25)
                {
                    ci_text = ci_text + 65;
                    printf("%c", ci_text);
                }
                else
                {
                    ci_text = ci_text + 65;
                    printf("%c", ci_text);
                }
                count ++;
            }
            else
            {
                ci_text = pl_text[n + strlen(key)];
                if(isupper(key[n - strlen(key)]))
                {
                    key_val = (int) key[n - strlen(key)] - 65;
                }
                else if(islower(key[n]))
                {
                    key_val = (int) key[n - strlen(key)] - 97;
                }

                ci_text = (int) pl_text[n] + key_val;
                printf("%c", ci_text);
            }
        }//end if0

        else if(islower(pl_text[n]))
        {
            p_text = (int) pl_text[n] - 97;

            if (count < strlen(key))
            {
                if(isupper(key[n]))
                {
                    key_val = (int) key[n] - 65;
                }
                else if(islower(key[n]))
                {
                    key_val = (int) key[n] - 97;
                }

                ci_text = p_text + key_val;
                ci_text = ci_text % 26;
                if(ci_text < 25)
                {
                    ci_text = ci_text + 97;
                    printf("%c", ci_text);
                }
                else
                {
                    ci_text = ci_text + 97;
                    printf("%c", ci_text);
                }
            count ++;
            }
            else
            {
                ci_text = pl_text[n + strlen(key)];

                if(isupper(key[n - strlen(key)]))
                {
                    key_val = (int) key[n - strlen(key)] - 65;
                }
                else if(islower(key[n - strlen(key)]))
                {
                    key_val = key[n - strlen(key)] - 97;
                }

                ci_text = (int) pl_text[n] + key_val;
                printf("%c", ci_text);
            }
        }
        else if(ispunct(pl_text[n]))
        {
            char punct;
            punct = pl_text[n];
            printf("%c", punct);
        }

        else if(isspace(pl_text[n]))
        {
            printf(" ");
        }
    }//end for
}//end cipher_text
