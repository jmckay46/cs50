#include<cs50.h>
#include<stdio.h>
#include<string.h>

/*      The Coleman–Liau index is a readability test designed by
        Meri Coleman and T. L. Liau to gauge the understandability
                            of a text.                                */

int main(void)
{
    string text = get_string("Text: ");
    int index = strlen(text);
    printf("%i\n", index);
}

