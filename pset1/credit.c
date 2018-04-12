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
    int valid = check_Luhn(cc_number, 10);
    if (valid != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        int r = get_length(cc_number, 10);
        printf("%i\n", r);
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
