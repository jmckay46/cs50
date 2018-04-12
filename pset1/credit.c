#include<cs50.h>
#include<stdio.h>
#include<math.h>

/*          IN PROGRESS         */

#define NEXT_DIGIT 100
#define MAX_CC_LENGTH 16
#define MIN_CC_LENGTH 13

int check_Luhn(long long, long long);                       //returns an integer
int get_length(long long, long long);                       //returns the length of the number


int main(void)
{
    long long cc_number = get_long_long("Number: ");
    long long mod;
    int first_digit;
    int second_digit;
    int valid = check_Luhn(cc_number, 10);
    int cc_length = get_length(cc_number, 10);

    if (valid != 0 && cc_length > MIN_CC_LENGTH)
    {
        printf("INVALID\n");
    }
    else
    {
        mod = pow(10, cc_length);
        first_digit = (cc_number - (cc_number % (mod/10)))/(mod/10);                //calculates & stores the first digit of the number
        mod = pow(10, cc_length - 1);                                               //modulus of the second first digit
        second_digit = (cc_number - (cc_number %(mod/10)))/(mod/10);                //store the first 2 digits of the number in second_digit

        if(first_digit == 4)
        {
            printf("VISA\n");
        }
        else if(second_digit >= 51 && second_digit <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if(second_digit >= 34 && second_digit <= 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
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

    for(int i = 0; i < (MAX_CC_LENGTH)/2; i++)
    {
        even_digit = (cc_in % (modulo * 10) - (cc_in % (modulo)))/(modulo);
        odd_digit = (cc_in % modulo - (cc_in % (modulo/10)))/(modulo/10);
        even_sum = even_digit * 2;
        if (even_sum > 9)
        {
            even_sum = 1 + (even_sum % 10);
        }
        modulo *= NEXT_DIGIT;
        odd_sum += odd_digit;                           //sum all odd digits, store it in odd_sum
        sum += even_sum;                                //take the sum of all even digits that are multiplied by 2
    }
    sum = sum + odd_sum;                                //take the sum of all odd digits and add it to the sum of all digits multiplied by 2
    return sum % 10;
}//end check_Luhn

int get_length(long long cin, long long modulus)
{
    int cc_length;
    long long mod;
    if (cin < modulus)
    {
        return 1;
    }
    while (modulus < cin)                                //loop until modulo > cin
    {
        modulus *= 10;
        mod = modulus;
    }
    cc_length = log10(mod);
    return cc_length;
}//end get_length
