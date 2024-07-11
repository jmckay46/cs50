#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

/*                  Sentence boundary detection                        */

int count_letters(string);                                          //gets the number of letters in a string
int count_words(string);                                           //gets the number of words in a string
int count_sent(string);                                            //counts number of sentences in a string


int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentence = count_sent(text);

    //applying coleman-liau index
    float l = (float) letters/words * 100;
    float s = (float) sentence/words * 100;

    float index = l*0.0588 - s*0.296 - 15.8;
    int grade = round(index);

    if(grade < 0)
    {
        printf("Before Grade 1\n");
    }
    else if(grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
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

int count_words(string s)
{
    int words = 0;

    for(int i = 0; i <strlen(s); i++)
    {
        if(isspace(s[i]))
        {
            words++;
        }
    }
    return words+1;                             //for the very last word
}

int count_sent(string s)
{
    int s_count = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            s_count++;
        }
    }
    return s_count;
}




