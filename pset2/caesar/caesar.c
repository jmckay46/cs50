
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
    if (argc <= 2)
    {
        string p_text = get_string("plaintext: ");               //prompt the user for a string
        int key = atoi(argv[1]);                                 //store the first argument into integer key
        cipher(p_text, key);
        printf("\n");
        printf("Program Counter is %i\n", argc);
    }
    else
    {
        printf("Error! argc must be less than %i\n", argc);
        return 1;
    }
}//end main


void cipher(string text, int k)                                 //this function prompts the user for a caesar's ciphered text & outputs the ciphered text
{
    printf("ciphertext: ");

    for(int n = 0; n < strlen(text); n++)                                  //one character at a time, at nth index of our string in plain text
        {

              if(isupper(text[n]))
            {
                int ci_text = (int) text[n] - 65;                                 //take the integer value of the ascii character and subtract by 65
                ci_text = ci_text + k;
                ci_text = ci_text % 26;
                if (ci_text <= 25)
                 {
                    char c_text = (char) ci_text +65;
                    printf("%c", c_text);
                 }
               else
                 {
                     char c_text = (char) ci_text + 65;
                     printf("%c", c_text);
                 }
            ci_text = 0;
            }

            else if(islower(text[n]))
             {
                 int ci_text = (int) text[n] - 97;
                 ci_text = ci_text + k;
                 ci_text = ci_text % 26;
                 if (ci_text <= 25)
                   {
                     char c_text = (char) ci_text +97;
                     printf("%c", c_text);
                   }
                 else
                   {
                     char c_text = (char) ci_text - 26 + 97;
                     printf("%c", c_text);
                   }
                 ci_text =0;
             }

            else if(isspace(text[n]))                           //if we run into a space at nth character, print a space
            {
                printf(" ");
            }

            else if(ispunct(text[n]))                           //if we run into a punctuation at nth character, then print the punctuated character
            {
                char punct = text[n];
                printf("%c", punct);
            }

        }//end of for
}//end cipher