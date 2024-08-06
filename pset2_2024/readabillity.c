#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
  string text = get_string("Text: ");

  int letters = count_letters(text);
  printf("%i\n", letters);
}

int count_letters(string text)
{
   int letters = 0;
   for(int i = 0, len = strlen(text); i < len; i++)
    {
        if(isalpha(text[i]))
        {
            letters = letters+1;
        }
    }
    return letters;
}
