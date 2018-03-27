#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

/*              This program prompts the user for the amount of change
                owed and outputs the number of coins dispensed.
                                                                        */
void counter(int amount);

int main(void)
{
    float change;

    do
        {
            change = get_float("Change Owed: ");                     //prompt the user for a float type
        }

    while(input <= 0);

    change = change*100;
    change = round(change);
    counter(change);

}//end main


void counter(int amount)
{
    int count = 0;

      while(amount >= QUARTER)
    {
        count ++;                                                    //increment the coin count per quarter
        amount = amount - QUARTER;
    }

    while(amount >= DIME)                                            //if the amount is greater than or equal to a 10 cents, then loop
    {
        count ++;
        amount = amount - DIME;
    }

    while(amount >= NICKEL)
    {
        count ++;                                                    //increment the coin count per nickel
        amount = amount - NICKEL;
    }

    while(amount >= PENNY)                                           //if the current amount is greater than or equal to one cent, then loop
    {
        count ++;                                                    //increment the coin count per penny
        amount = amount - PENNY;
    }


     printf("%i\n", count);                                         //output the number of coins dispensed
}//end of counter