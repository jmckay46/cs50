#include<stdio.h>
#include<cs50.h>

//our main function will prompt the user with constraints that the user input, h needs to be less than 23 and a non negative integer.

int main(void){

    int uNum;

    do  {                                               //repeatedly prompt the user for a positive integer
        uNum = get_int("Height: ");
        }

    while(uNum < 0 || uNum > 23);

    uNum = uNum +1;

    for(int i = 1; i < uNum; i++)
                {                                   //print this many columns, changed i to 1 since it's not a full pyramid

                    for(int l =uNum; l > i+1; l--)
                        {                           //print this many spaces, decrement the amount of printed spaces
                            printf(" ");
                        }

                    for(int j =0; j <= i; j++)
                        {                           //print this many blocks, increment the amount of printed blocks
                            printf("#");
                        }


       printf("\n");

    }//end for loop
}

//end main

