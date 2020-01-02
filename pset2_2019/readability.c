#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int main(void)
{
    string text = get_string("Text: ");
    int str_len = strlen(text);
    int char_cnt = 0;

    for(int i =0; i < str_len; i++)            //iterate through each character, omitt if space
    {
        if(isalpha(text[i]) || ispunct(text[i]))
        {
            char_cnt++;
        }
    }

    printf("character count is: %i\n", char_cnt);
}

