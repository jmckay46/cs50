#include<stdio.h>
#include<cs50.h>

#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

void mario(int);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");                            //repeatedly prompt the user for a positive integer
    }
    while(height < 0 || height > 23);                           //input constraints must be greater than zero and less than 23

    mario(height);

}//end main

void mario(int h_in)
{
    for(int i = 0; i < h_in; i++)
        {
            for (int n = h_in; n > i+1; n--)
            {
                printf("%c", SPACE);
            }
            for (int m = 0; m <= i; m++)
            {
                printf("%c", HASH);
            }
            printf("  ");

            for (int k = 0; k <= i; k++)
                {
                    printf("%c", HASH);
                }
            printf("%c", NEWLINE);
        } //end of one line - on to the next.
}//end mario