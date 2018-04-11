#include<cs50.h>
#include<stdio.h>
#include<math.h>

int odd_digit(long long, long long);             //returns the sum of digits not multiplied by 2
int even_digit(long long, long long);

int digit = 0;
int sum = 0;

int main(void)
{
    long long cc_number = get_long_long("Credit card number?: ");
    int odd_sum = odd_digit(cc_number, 10);
    int even_sum = even_digit(cc_number, 100);
    int check_sum = odd_sum + even_sum;
    printf("checksum: %i\n", check_sum);
    return 0;
}//end main

int odd_digit(long long y, long long o_mod)
{
    for (int i = 0; i < 8; i++)
    {
        digit = (y % o_mod - (y % (o_mod/10)))/(o_mod/10);
        sum += digit;
        o_mod *=100;
    }
    return sum;
}

int even_digit(long long x, long long e_mod)                                    //e_mod is 100, returns the total sum of digits multiplied by 2
{
    int sum1 = 0;
    for (int i = 0; i < 8; i++)                                                     //this loop
    {
        digit = (x % e_mod - (x % (e_mod/10)))/(e_mod/10);
        sum = digit * 2;                                                                //multiply each digit by 2
        if (sum > 9)                                                                //if the digit is greater than 9..
        {
            sum = 1 + (sum % 10);                                                   //add 1 + the ones' place
        }
        e_mod *= 100;
        sum1 += sum;
    }
    return sum1;
}
