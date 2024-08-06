#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int compute_score(string word);
int POINTS[] = {1, 3, 3, 3, 1, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main()
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //printf("%i\n", score1);
    //printf("%i\n", score2);

    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score2 > score1)
    {
        printf("Player 2  wins!\n");
    }
    else if(score1 == score2)
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;

    for(int i = 0, len = strlen(word); i < len; i++)
    {
        if(isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if(islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
