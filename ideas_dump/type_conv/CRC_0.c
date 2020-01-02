#include<cs50.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

#define BIT 2

char str_binary(int);

int main()
{
    string s = get_string("Message: ");

    char bit_val[65535];
    int decimal, bit_len;

    for(int i = 0; i < strlen(s); i++)
    {
        decimal = (int) s[i];
        bit_len = log(decimal)/log(BIT);

        for(int k = bit_len; k >=0; k--)
        {
            bit_val[k] = str_binary(decimal);
            decimal = decimal/BIT;
        }
        printf("%s\n", bit_val);
    }
}

char str_binary(int cin)
{
    if(cin % BIT)
    {
        return '1';
    }
    else
    {
        return '0';
    }
}