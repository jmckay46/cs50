#include<stdio.h>
#include<cs50.h>

void mario(int);

int main(void)
{

    int height;

    do
    {
        height = get_int("Height: ");                          //repeatedly prompt the user for a positive integer
    }

    while(height < 0 || height > 23);

    mario(height);

}//end main


void mario(int h_in)
{
    //num_lines is the total # of spaces and hashes
    for(int num_lines = 0; num_lines < h_in; num_lines++ )
        {
            //print the number of spaces
            for (int num_spaces = h_in; num_spaces > num_lines+1; num_spaces--)
                {
                    printf(" ");
                }
            //print the number of hashes
            for (int hashes = 0; hashes <= num_lines; hashes++)
                {
                    printf("#");
                }
            //print a new line per loop
            printf("\n");

        } //end of main for loop

}//end mario
