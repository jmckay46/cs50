#include<cs50.h>
#include<stdio.h>
#include<math.h>

#define BASE 10
#define VISA 16
void even_digit(long long, long long);            //mod = 100
void odd_digit(long long, long long);             //mod = 1000

int main(void)
{
    printf("credit card number: 4519019868815974\n");
    long long cc_number = 4519019868815974;
    even_digit(cc_number, 100);
    odd_digit(cc_number, 10);
}

void even_digit(long long x, long long e_mod, int init)
{
    int r;
    int sum;
    printf("Even digits: \n");
    for (int i = 0; i < 8; i++)
    {
        r = (x % e_mod - (x % (e_mod/BASE)))/(e_mod/BASE);
        sum = r * 2;
        printf("%i * 2 : %i   ", r, sum);
        if (sum > 9)
        {
            int sum1 = 1 + (sum % BASE);
            printf("%i\n", sum1);
        }
        else
        {
            printf("%i\n", sum);
        }
        e_mod *= 100;
    }
}
void odd_digit(long long y, long long o_mod)
{
    int t;
    int sum = 0;
    printf("Odd digits: \n");
    for (int i = 0; i < 8; i++)
    {
        t = (y % o_mod - (y % (o_mod/BASE)))/(o_mod/BASE);
        printf("%i\n", t);
        sum += t;
        o_mod *=100;
    }
    printf("\n%i\n", sum);
}
