#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    printf("credit card number: 4519019868815974\n");
    long long cc_number = 4519019868815974;
    int uNum;
    int mod = 1;

        uNum = cc_number % mod;
        mod = mod/10;
        uNum = (cc_number - uNum % mod)/mod;
        printf("%i\n", digit);                              //accessing the mod'th digit of cc_number

}
