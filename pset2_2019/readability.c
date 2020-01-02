#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int count_letters(string);                                    //gets the number of letters in a string
int count_words(string, int);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text, letters);
    printf("letters: %i\n", letters);
    printf("words: %i\n", words);
}

int count_letters(string s)
{
     int alpha = 0;

       for(int i = 0; i <strlen(s); i++)
       {
           if(isalpha(s[i]))
           {
                alpha++;
           }
       }
    return alpha;
}

int count_words(string s, int l_in)
{
    int words;

    for(int i = 0; i <strlen(s); i++)
    {
        if(isspace(s[i]))
        {
            words = i - l_in;
        }
    }
    return words;
}