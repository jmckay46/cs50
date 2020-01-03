#include<stdio.h>
#include<cs50.h>

#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

void pyramid(int);                                      //prints mario's pyramid

int main(void)
{

    int height;
    do
    {
        height = get_int("Height: ");                         //repeatedly prompt the user for a positive integer
    }
    while(height < 0 || height > 23);

    pyramid(height);

}//end main


void pyramid(int h_in)
{
    //num_lines is the total # of spaces and hashes
    for(int num_lines = 0; num_lines < h_in; num_lines++ )
        {
            //print the number of spaces
            for (int num_spaces = h_in; num_spaces > num_lines+1; num_spaces--)
                {
                    printf("SPACE");
                }
            //print the number of hashes
            for (int hashes = 0; hashes <= num_lines; hashes++)
                {
                    printf("HASH");
                }
            //print a new line per loop
            printf("NEWLINE");

        } //end of main for loop

}//end mario
