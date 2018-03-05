#include <stdio.h>
#include <cs50.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(void)
{
    float input;
    int amount;
    int count = 0;

    do
        {
            input = get_float("Change Owed: ");
        }

    while(input <= 0);

    input = input*100;

    amount = (int) input;

      while(amount >= QUARTER)
    {
        count ++;                                                //increment the coin count per quarter
        amount = amount - QUARTER;
    }

    while(amount >= DIME)                                       //if the amount is greater than or equal to a 10 cents, then loop
    {
        count ++;
        amount = amount - DIME;
    }

    while(amount >= NICKEL)
    {
        count ++;                                               //increment the coin count per nickel
        amount = amount - NICKEL;
    }

    while(amount >= PENNY)           //if the current amount is greater than or equal to one cent, then loop
    {
        count ++;                    //increment the coin count per penny
        amount = amount - PENNY;
    }


     printf("%i\n", count);                 //output the number of coins dispensed

    //printf("%f\n", amount);         //used to test output the amount

