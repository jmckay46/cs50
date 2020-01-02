#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int num_char(string);                                  //returns # of alphabets and punctuations in a string
int num_space(string);                                 //returns # of spaces in a string

int main(void)
{
    string text = get_string("Text: ");
    int letters = num_char(text) - num_space(text);
    printf("%i\n", letters);
    //how many letters are in a sentence
}

int num_char(string s)
{
       int char_cnt = 0;

       for(int i =0; i < strlen(s); i++)
       {
           if(isalpha(s[i]) || ispunct(s[i]))
           {
               char_cnt++;
           }
       }
    return char_cnt;
}

int num_space(string s)
{
    int space_cnt = 0;

    for(int i =0; i < strlen(s); i++)
    {
        if(isspace(s[i]))
        {
            space_cnt++;
        }
    }
    return space_cnt;
}


