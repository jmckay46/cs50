#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int uNum;                                   //initialize user input as an int
    do                                          //repeatedly prompt the user input for a non-negative integer
    {
         uNum = get_int("Height: ");            //prompt the user for the height of mario's double pyramid
    }

    while(uNum < 0 || uNum > 23);

    for(int i = 0; i < uNum; i++ )                  //this loop prints one row and loops again until i is less than the users input
        {
            for (int j = uNum; j > i+1; j--)          //this loop prints the number of spaces per row
                {
                    printf(" ");
                }
            for (int l = 0; l <= i; l++)     //this loop prints the number of hashes per row
                {
                    printf("#");
                }

            printf("  ");                   //print 2 spaces after the printed hashes

            for (int k = 0; k <= i; k++)    //print the same number of hashes again for the full double pyramid
                {
                    printf("#");
                }

            printf("\n");               //print a new line
        } //end of main for loop
}