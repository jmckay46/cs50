#include<stdio.h>
#include<cs50.h>
#include<math.h>

void hex_conv(int);
void bin_conv(int);

int main()
{
    int dec_val = get_int("Decimal value: ");
    hex_conv(dec_val);
    bin_conv(dec_val);
}

void hex_conv(int val1)
{
    char hex_list[16] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex_val[4095];
    int n = log(val1)/log(16)+1;
    int hex_index;

    for(int i = n; i >= 0; i--)
    {
        hex_index = val1 % 16;
        hex_val[i] = hex_list[hex_index];
        val1 = val1/16;
    }
    printf("Hex value: 0x%s\n", hex_val);
}

void bin_conv(int val2)
{
    char bin_val[65535];
    int bin_index = log(val2)/log(2);

    for(int i = bin_index; i >= 0; i--)
    {
        if(val2%2 == 1)
        {
            bin_val[i] = '1';
        }
        else
        {
            bin_val[i] = '0';
        }
        val2 = val2/2;
    }
    printf("Binary value: %s\n", bin_val);
}