#include<cs50.h>
#include<stdio.h>
#include<math.h>

/*          IN PROGRESS         */

#define NEXT_DIGIT 100
#define BASE_TEN 10

int check_Luhn(long long, long long);                       // checks to see if the given credit card number is valid

int main(void)
{
    long long cc_number = get_long_long("Number: ");
    int valid = check_Luhn(cc_number, BASE_TEN);
    if (valid == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}//end main

int check_Luhn(long long cc_in, long long modulo)
{
    int sum = 0;
    int even_digit = 0;
    int odd_digit = 0;
    int even_sum = 0;
    int odd_sum = 0;

    for(int i = 0; i < 8; i++)
    {
        even_digit = (cc_in % (modulo * BASE_TEN) - (cc_in % (modulo)))/(modulo);
        odd_digit = (cc_in % modulo - (cc_in % (modulo/BASE_TEN)))/(modulo/BASE_TEN);
        even_sum = even_digit * 2;
        if (even_sum > 9)
        {
            even_sum = 1 + (even_sum % BASE_TEN);
        }
        modulo *= NEXT_DIGIT;
        odd_sum += odd_digit;                           //sum all odd digits, store it in odd_sum
        sum += even_sum;                                //take the sum of all even digits that are multiplied by 2
    }
    sum = sum + odd_sum;                                //take the sum of all odd digits and add it to the sum of all digits multiplied by 2
    return sum % BASE_TEN;
}//end check_Luhn