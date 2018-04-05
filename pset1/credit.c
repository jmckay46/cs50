#include<cs50.h>
#include<stdio.h>
#include<math.h>


int main(void)
{
    printf("credit card number: 4519019868815974\n");
    long long cc_number = 4519019868815974;
    long long uNum;
    long long yNum;
    long long mod = 100;
    long long xNum;

    for(int n = 1; n < 9; n++)                          //for generating the second to last digit in the credit card
    {
        printf("mod = %lld\n", mod);
        uNum = cc_number % mod;
        yNum = cc_number % (mod/10);
        xNum = (uNum - yNum);
        xNum = xNum/(mod/10);
        printf("%lld\n", xNum);
        mod *= 100;
    }
}