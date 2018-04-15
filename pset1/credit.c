#include<cs50.h>
#include<stdio.h>
#include<math.h>

/*          IN PROGRESS         */

#define NEXT_DIGIT 100
#define MAX_CC_LENGTH 16
#define MIN_CC_LENGTH 13

int check_Luhn(long long, long long, cc_length);                       //returns an integer
int get_length(long long, long long);                       //returns the length of the number

long long base_ten;

int main(void)
{
    long long cc_number = get_long_long("Number: ");
   // long long mod;
    int second_digit;
    int valid = check_Luhn(cc_number);
    int cc_length = get_length(cc_number, 10);

    if (valid % 10 != 0 || cc_length < MIN_CC_LENGTH)
    {
        printf("INVALID\n");
    }
    else
    {
        base_ten = pow(10, cc_length - 1);                                               //modulus of the first and second set of digits
        second_digit = (cc_number - (cc_number % (base_ten)/10)))/(base_ten/10);                //store the first 2 digits of the number in second_digit

        if(second_digit >= 40 && second_digit <= 49)
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
            printf("INVALID1\n");
        }
    }
    return 0;

}//end main

int check_Luhn(long long cc_in, int cc_length)
{
    int sum = 0;
    int even_digit = 0;
    int odd_digit = 0;
    int even_sum = 0;
    int odd_sum = 0;

    for(int i = 0; i < cc_length; i++)
    {
        even_digit = (cc_in % (base_ten * 10) - (cc_in % (base_ten)))/(base_ten);
        odd_digit = (cc_in % base_ten - (cc_in % (base_ten/10)))/(base_ten/10);
        even_sum = even_digit * 2;
        if (even_sum > 9)
        {
            even_sum = 1 + (even_sum % 10);
        }
        base_ten *= NEXT_DIGIT;
        odd_sum += odd_digit;                           //sum all odd digits, store it in odd_sum
        sum += even_sum;                                //take the sum of all even digits that are multiplied by 2
    }
    sum = sum + odd_sum;                                //take the sum of all odd digits and add it to the sum of all digits multiplied by 2
    return sum;
}//end check_Luhn

int get_length(long long cin)
{
    int cc_length;
    long long n;
    if (cin < base_ten)
    {
        return 1;
    }
    while (base_ten < cin)                                //loop until modulo > cin
    {
        base_ten *= 10;
        n = base_ten;
    }
    cc_length = log10(n);
    return cc_length;
}//end get_length
