#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string phrase_1 = get_string("Player 1: ");
    string phrase_2 = get_string("Player 2: ");

    int score_1 = compute_score(phrase_1);
    int score_2 = compute_score(phrase_2);

    printf("score 1 is: %i\n", score_1);
    printf("score 2 is: %i\n", score_2);
}

int compute_score(string phrase)            //iterate through phrase and add to the sum
{
    int length = strlen(phrase);
    int score = 0;

    for(int i = 0; i < length; i++)         //iterate through each character of the phrase
    {
        if(isupper(phrase[i]))
        {
            score += POINTS[phrase[i] - 'A'];
        }
        if(islower(phrase[i]))
        {
            score += POINTS[phrase[i] - 'a'];
        }
    }
    return score;
}
