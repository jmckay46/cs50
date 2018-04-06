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
    long long sum;
    long long rNum;

    printf("first set: \n\n");
    //here we need to multiply each digit, and then add each individual digit together

    for(int n = 1; n < 9; n++)                          //for generating the second to last digit on the credit card
    {
        uNum = cc_number % mod;
        yNum = cc_number % (mod/10);
        xNum = (uNum - yNum)/(mod/10);
        printf("%lld", xNum);
        sum = xNum*2;
       // printf("*2 =  %lld", sum);

        if(sum >= 10)
        {
            rNum = sum % 10;
            sum = (sum - rNum)/10;
            printf("  *2 and added: %lld\n", rNum + sum);
        }
        else
        {
            printf("  *2 and added: %lld\n", sum);
        }

        mod *= 100;
    }
    mod = 1000;
    sum = cc_number % 10;
    printf("\nsecond sets' sum: \n");
    //here we need to add each digit and then take the sum.
    for (int j = 0; j <= 6 ; j++)                           //for generating the last to second last digit on the credit card
    {
        uNum = cc_number % mod;
        yNum = cc_number % (mod/10);
        xNum = (uNum - yNum)/(mod/10);
        mod *= 100;
        sum += xNum;
    }
    printf("%lld\n", sum);
}
