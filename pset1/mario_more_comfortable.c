#include<stdio.h>
#include<cs50.h>

#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

void double_pyramid(int);                                       //prints mario's double pyramid based on the height variablle

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");                            //repeatedly prompt the user for a positive integer
    }
    while(height < 0 || height > 23);                           //input constraints must be greater than zero and less than 23

    double_pyramid(height);

}//end main

void double_pyramid(int h_in)
{
    //start at line one, column one
    //h_in is the input variable
    for(int num_lines = 0; num_lines < h_in; num_lines++)
        {
            //num_spaces is the number of spaces printed
            for (int num_spaces = h_in; num_spaces > num_lines+1; num_spaces--)
            {
                printf("%c", SPACE);
            }
            //print these many hashes after every space is printed in each line
            for (int num_hashes = 0; num_hashes <= num_lines; num_hashes++)
            {
                printf("%c", HASH);
            }
            printf("  ");

            for (int num_hashes = 0; num_hashes <= num_spaces; k++)
                {
                    printf("%c", HASH);
                }
            printf("%c", NEWLINE);
        } //end of one line - on to the next.
}//end mario