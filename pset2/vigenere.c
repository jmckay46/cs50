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

    int count = 0;
    int key_value;
    int key_value1;
    int key_len = strlen(key);
    int p_text;
    char ci_text;
    //if is upper of k[n] then subtract 65, if is lower of k[n] then subtract 97

    for (int n = 0; n < strlen(pl_text); n++)
    {
        key_value = (int) key[n];

        if(isupper(key[n]))
        {
            key_value = key_value - 65;
        }
        else if(islower(key[n]))
        {
            key_value = key_value - 97;
        }

        if(isupper(pl_text[n]))
        {
            if(count < key_len)
            {
                p_text = pl_text[n] - 65;
                ci_text = (char) p_text + key_value;
                ci_text = ci_text % 26;
                if (ci_text < 25)
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
                key_value1 = (int) key[n - key_len] - 65;
                p_text = pl_text[n + key_len] - 65;
                ci_text = (char) p_text + key_value1;
                ci_text = ci_text % 26;
                if (ci_text < 25)
                {
                    ci_text = ci_text + 65;
                    printf("%c", ci_text);
                }
                else
                {
                    ci_text = ci_text + 65;
                    printf("%c", ci_text);
                }
            }
        }

        else if(islower(pl_text[n]))
        {
            if (count < key_len)
            {
                p_text = pl_text[n] - 97;
                ci_text = (char) p_text + key_value;
                ci_text = ci_text % 26;
                if (ci_text < 25)
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
                key_value1 = key[n - key_len] - 97;
                p_text = pl_text[n + key_len];
                ci_text = (char) p_text + key_value1;
                ci_text = ci_text % 26;
                if (ci_text < 25)
                {
                    ci_text = ci_text + 97;
                    printf("%c", ci_text);
                }
                else
                {
                    ci_text = ci_text + 97;
                    printf("%c", ci_text);
                }
            }
        }

        else if(isspace(pl_text[n]))
        {
            printf(" ");
        }

        else if(ispunct(pl_text[n]))
        {
            char punct = pl_text[n];
            printf("%c", punct);
        }

    }//end for
}//end cipher_text
