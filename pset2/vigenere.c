#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void cipher(string text, string k);

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

void cipher(string text, string k)
{
    printf("ciphertext: ");

    for (int n = 0; n < strlen(text); n++)
    {
        int i = (int) k[n] - 65;
        i = i % 26;
        if (i < 25)
        {
            char ci_text = (char) text[n] + i;
            printf("%c", ci_text);
        }
        else
        {
            char ci_text = (char) text[n] - 26 + 97;
            printf("%c", ci_text);
        }
        i = 0;
    }
}
