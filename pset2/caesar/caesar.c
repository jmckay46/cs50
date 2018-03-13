#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*          argc is the argument counter                        */
/*          argv[] is the arguments passed to the program       */
/*          therefore argv[1] must be the key                   */

void cipher(string text, int k);

int main (int argc, string argv[])
{

        string p_text = get_string("plaintext: ");               //prompt the user for a string
        int key = atoi(argv[1]);                                 //store the first argument into integer key
        cipher(p_text, key);
        printf("\n");
        printf("Program Counter is %i\n", argc);

}//end main


void cipher(string text, int k)                                 //this function prompts the user for a caesar's ciphered text & outputs the ciphered text
{
    printf("ciphertext0: ");
    char ci_text;
    int j = strlen(text);                                       //store the strings length into j
    for (int n = 0; n < j; n++)                                 //loop until the end of the string
    {
        ci_text = text[n] + k;                                  //ci_text is the character at the nth plus the key

        if(isspace(text[n]))                                    //if we run into a space in our string, then print the space
        {
            printf(" ");
        }
        else                                                    //else, print the ciphered character
        {
            printf("%c", ci_text);
        }
    }//end for

    printf("\nciphertext1: ");
    for (int l = 0; l < j; l++)
    {
        ci_text = text[l] + k;
        if(isalpha(ci_text))                                    //if we run into a single ciphered alphabetical character
        {
            printf("%c", ci_text);                              //then print the ciphered alphabetical letter
        }
        else
        {
            ci_text = 'A' + l;                                  //if it's not an alphabet, add A + count
            printf("%c", ci_text);
        }
    }
}//end cipher
