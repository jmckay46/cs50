#include<cs50.h>
#include<stdio.h>
#include<math.h>

//int cc_length()                           find.length(cc_number), return int; length of credit card #
int check_Luhn(long long, long long);         // returns check_sum

int main(void)
{
    long long cc_number = get_long_long("Number: ");
    int check_sum = check_Luhn(cc_number, 10);
    printf("checksum: %i\n", check_sum);
    return 0;
}//end main

int check_Luhn(long long cc_in, long long mod)
{
    int sum = 0;
    int e_digit = 0;
    int o_digit = 0;
    int e_sum = 0;
    int o_sum = 0;
    long long e_mod = 10 * mod;

    for(int i = 0; i < 8; i++)
    {
        e_digit = (cc_in % e_mod - (cc_in % (e_mod/10)))/(e_mod/10);
        o_digit = (cc_in % mod - (cc_in % (mod/10)))/(mod/10);
        e_sum = e_digit * 2;
        if (e_sum > 9)
        {
            e_sum = 1 + (e_sum % 10);
        }
        e_mod *= 100;
        mod *= 100;
        o_sum += o_digit;
        sum += e_sum;
    }

    return sum + o_sum;
}//end check_Luhn