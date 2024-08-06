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
  string text = get_string("Text: ");           //get users input string

  int letters = count_letters(text);            //count the number of letters, store in int letters
  int words = count_words(text);                //count the number of words, store in int words
  int sentences = count_sentences(text);        //count the number of sentences, store it in int sentences

  printf("%i\n", letters);                      //print out the number of letters in the users input
  printf("%i\n", words);                        //print out the number of words in the users input
  printf("%i\n", sentences);                    //print out the number of sentences in the users input
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

int count_words(string text)
{
    int words = 1;
    for(int i = 0, len = strlen(text); i < len; i++)
    {
        if(isspace(text[i]))
        {
            words = words+1;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for(int i = 0, len = strlen(text); i < len; i++)
    {
        if(ispunct(text[i]))
        {
            sentences = sentences+1;
        }
    }
    return sentences;
}
