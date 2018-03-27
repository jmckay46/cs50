#include<stdio.h>
#include<cs50.h>

/*                      This program prompts the user for the height of
                        mario's half pyramid, using spaces and hashes
                                                                                        */

void mario(int yNum);

int main(void)
{
    int uNum;

    do
    {
        uNum = get_int("Height: ");                  //repeatedly prompt the user for a positive integer
    }

    while(uNum < 0 || uNum > 23);

    mario(uNum);


}//end main

void mario(int yNum)
{
        yNum = yNum +1;

        for(int i = 1; i < yNum; i++)                //print this many columns, changed i to 1 since it's not a full pyramid
        {

            for(int l = yNum; l > i +1; l--)        //print this many spaces, decrement the amount of printed spaces
            {
                printf(" ");
            }

            for(int j = 0; j <= i; j++)             //print this many blocks, increment the amount of printed blocks
            {
                printf("#");
            }

            printf("\n");                            //print a new line per loop

        } //end for loop

}//end mario