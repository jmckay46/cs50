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
        //when text[0] = 'H',
        int ci_text = (int) text[n] - 65;                      //zero in A = 0, B = 1, B = 2, k_text is the key
        int i = (int) k[n] - 65;                               //the key value i is equal to the integer value at the nth value of k
            ci_text = ci_text + i;
            ci_text = ci_text % 26;
            if(ci_text < 25)
            {
                char c_text = (char) ci_text + 65;
                printf("%c", c_text);
            }

        else
            {
                printf("@");
            }

    }
}//end cipher