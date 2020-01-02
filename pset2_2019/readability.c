#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int count_letters(string);                                    //gets the number of letters in a string

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = 0;
    printf("letters: %i\n", letters);

    for(int index = 0; index <strlen(text); index++)
    {
        if(isspace(text[index]))
        {
            words = index - letters;
        }
    }

    printf("words: %i\n", words);
}

int count_letters(string s)
{
     int alpha = 0;

       for(int i =0; i <strlen(s); i++)
       {
           if(isalpha(s[i]))
           {
                alpha++;
           }
       }
    return alpha;
}
