#include<cs50.h>
#include<stdio.h>
#include<math.h>

#define MIN_CC_LENGTH 13

int check_Luhn(int sum[], int);
int get_length(long long);
void cc_valid(long long, long long, int);


int main()
{
    unsigned int long long nextPos = 1;
    unsigned int long long cc_number = get_long_long("Number: ");

    int cc_length = get_length(cc_number);                                 //store the length of the number in length

    cc_valid(cc_length, nextPos, valid);
    return 0;
}//end main


int check_Luhn(int sum[], int cc_length)
{
    int nDigit;
    int oDigit;
    int even_sum = 0;
    int odd_sum = 0;
    int n = 0;
    int o = 0;

    for (int i = 0; i < (cc_length/2); i++)
    {
        nDigit = (sum[n + 1])*2;
        if (nDigit > 9)
        {
            nDigit = 1 + (nDigit % 10);
        }
        even_sum += nDigit;
        n += 2;
    }
    for (int i = 0; i < (cc_length/2); i++)
    {
        oDigit = sum[o];
        odd_sum += oDigit;
        o += 2;
    }
    return (even_sum + odd_sum) % 10;
}//end check_luhn

/*          This function returns an integer; any given integer
            from 0 to the maximum credit card number length -> 18
            by taking the logarithm of the inputs' decimal place.
*/
int get_length(long long cc_in)
{
    int cc_length;
    long long base_ten = 1;
    long long n;
    if (cc_in < base_ten)
    {
        return 1;
    }
    while (base_ten < cc_in)
    {
        base_ten *= 10;
        n = base_ten;
    }
    cc_length = log10(n);
    return cc_length;
}//end get_length

void cc_valid(long long cc_in)
{
    long long nextPos = 1;
    int digit[cc_length];

    for (int i = 0; i < cc_length; i++)                                 //iterate through each credit card number from an integer; 0 to cc_length
    {
        digit[i] = (cc_number % (10 * nextPos))/(1 * nextPos);          //iterate through each digit and store in digit[cc_length]
        nextPos *= 10;
    }

    int valid = check_Luhn(digit, cc_length);

    long long sec_digit = (cc_in - (cc_in % (nextPos/100)))/(nextPos/100);              //access the first two digits, store it in sec_digit

     if (cc_in < MIN_CC_LENGTH)                                         //the length
    {
        printf("INVALID\n");                                            //if the length is less than the minimum cc length, print INVALID
    }

    if (valid != 0)
    {
        printf("INVALID\n");
    }
    else
    {

        if (sec_digit >= 40 && sec_digit <= 49)
        {
            printf("VISA\n");
        }
        else if (sec_digit >= 51 && sec_digit <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (sec_digit == 34 || sec_digit == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

}