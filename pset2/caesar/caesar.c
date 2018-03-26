#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*                  This program prompts the user for a string
                    and ciphers the string using caesar's
                    algorithm                                       */


void cipher(string text, int k);

int main (int argc, string argv[])
{
    if (argc == 2)                                               //print a message error if the argc is not equal to 2
    {
        string p_text = get_string("plaintext: ");               //prompt the user for a string
        int key = atoi(argv[1]);                                 //store the first argument into integer key
        cipher(p_text, key);                                     //print the ciphered charater
    }
    else
    {
        printf("Usage: ./caesar k");
        return 1;
    }
}//end main


void cipher(string text, int k)                                 //this function prints caesar's ciphered text
{
    printf("ciphertext: ");

    for(int n = 0; n < strlen(text); n++)                       //loop until the end of the string
        {

              if(isupper(text[n]))                              //if we run into an uppercase..
            {
                int ci_text = (int) text[n] - 65;               //'zero' in the uppercase letters
                ci_text = ci_text + k;                          //add the key value to the 'zeroed' integer value
                ci_text = ci_text % 26;                         //mod that value by 26
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
            ci_text = 0;                                        //reset ci_text to 0 since we'll be looping again=
            }

            else if(islower(text[n]))                           //if we run into a lowercase..
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