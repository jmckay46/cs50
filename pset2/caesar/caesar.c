#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*          argc is the argument counter             */
/*          argv[] is the arguments passed to the program */
/*          therefore argv[1] must be the key       */

int main (int argc, string argv[])
{

        string p_text = get_string("plaintext: ");               //prompt the user for a string
        int key = atoi(argv[1]);                                //store the first argument into integer key
        int j = strlen(p_text);                                 //store the total length of users input into integer j
        char c_text;
        printf("ciphertext: ");
        for (int n = 0; n < j; n ++)                            //loop until the end of the string
            {

                     c_text = p_text[n] + key;                  //store the nth character + key in c_text

                     if(isspace(p_text[n]))                     //print a space when a space is given, we don't want to make any changes to spaces.
                        {
                            printf(" ");
                        }
                    else
                        {
                            printf("%c", c_text);               //print each ciphered character, sequentially
                        }
            }

    printf("\n");
    printf("Program Counter is %i\n", argc);

}//end main



