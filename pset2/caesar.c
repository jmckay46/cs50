#include<cs50.h>
#include<stdio.h>
#include<string.h>

/* to do:
1) get the key
2) get the plain text
3) encipher
4) print cipher text
*/


int main(void)                   //normally we'd use the argv & string, but for now we're going to prompt the user input for a "key"
{

    string plain_text = get_string("plaintext: ");
    int key = get_int("key: ");

        for (int i = 0; i < strlen(plain_text); i++)
     {
        printf("%c %i\n", plain_text[i], (int)plain_text[i+1]);
     }

}