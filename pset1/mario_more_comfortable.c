#include<stdio.h>
#include<cs50.h>

#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

void mario(int yNum);

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

void mario(int yNum)
{
    for(int i = 0; i < yNum; i++)                          //this loop prints one row and loops again until i is less than the users input
        {
            for (int n = yNum; n > i+1; n--)                //this loop prints the number of spaces per row
            {
                printf("%c", SPACE);
            }
            for (int m = 0; m <= i; m++)                    //this loop prints the number of hashes per row
            {
                printf("%c", HASH);
            }
            printf("  ");                                   //print 2 spaces after the printed hashes

            for (int k = 0; k <= i; k++)                    //print the same number of hashes again for the full double pyramid
                {
                    printf("%c", HASH);
                }
            printf("%c", NEWLINE);                          //print a new line for each loop
        } //end of main for loop
}//end mario