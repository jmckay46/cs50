#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

/*          argc is the argument counter             */
/*          argv[] is the arguments passed to the program */
/*          therefore argv[1] must be the key       */

int main (int argc, string argv[])
{

        string p_text = get_string("plaintext: ");               //prompt the user for a string
        int key = atoi(argv[1]);                                //store the first argument into integer key
        int j = strlen(p_text);                                 //store the total length of users input into integer j

        printf("ciphertext: ");
        for (int n = 0; n < j; n ++)                            //loop j amount of times, which is the users input
            {
                char c_text = p_text[n] + key;
                printf("%c", c_text);
            }
    printf("\n");
    printf("Program Counter is %i\n", argc);

}//end main