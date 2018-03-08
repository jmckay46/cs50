#include<stdio.h>
#include<cs50.h>

void mario(int yNum);

int main(void)
{

    int uNum;

    do
    {
        uNum = get_int("Height: ");                          //repeatedly prompt the user for a positive integer
    }

    while(uNum < 0 || uNum > 23);

    mario(uNum);

}//end main


void mario(int yNum)
{

    for(int i = 0; i < yNum; i++ )                          //this loop prints one row and loops again until i is less than the users input
        {
            for (int j = yNum; j > i+1; j--)                //this loop prints the number of spaces per row
                {
                    printf(" ");
                }
            for (int l = 0; l <= i; l++)                    //this loop prints the number of hashes per row
                {
                    printf("#");
                }

            printf("  ");                                   //print 2 spaces after the printed hashes

            for (int k = 0; k <= i; k++)                    //print the same number of hashes again for the full double pyramid
                {
                    printf("#");
                }

            printf("\n");                                   //print a new line for each loop

        } //end of main for loop

}//end mario