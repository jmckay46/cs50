#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int num_letters(string);

int main(void)
{
    string text = get_string("Text: ");
    int n = num_letters(text);
    printf("%i\n", n);
    //how many letters are in a sentence
}

int num_letters(string s)
{
     int char_cnt = 0;
     int space_cnt = 0;
     int letters;

       for(int i =0; i < strlen(s); i++)
       {
           if(isalpha(s[i]) || ispunct(s[i]))
           {
               char_cnt++;
           }
           else if(isspace(s[i]))
           {
               space_cnt++;
           }
       }

    letters = char_cnt - space_cnt;

    return letters;
}


