#include<stdio.h>
#include<cs50.h>
#include<string.h>

/*****************************IN PROGRESS**********************************/

int main(void)
{
    string p_text = get_string("plaintext: ");          //prompt the user for a string, and store it in p_text
    int key = get_int("Key: ");                         //prompt the user for a key
    int j = strlen(p_text);                             //store j as the number of total characters in the given string

    printf("ciphertext: ");
    for(int i =0; i < j; i++)                           //loop till end of the string
    {
        char c_text = p_text[i] + key;
        printf("%c", c_text);                           //print each translated character
    }

    printf("\n");
}