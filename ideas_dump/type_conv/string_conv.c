#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

#define HEX_BASE 16
#define BIT 2

void string_hex(char);
void str_binary(char);

int main()
{
    string s = get_string("Input: ");

    for(int i = 0; i <strlen(s); i++)
    {
        string_hex(s[i]);
        str_binary(s[i]);
    }
}

void string_hex(char cin0)
{
    char hex_val[4095];
    char hex_list[HEX_BASE] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int index, int_val0, hex_len;

    int_val0 = (int) cin0;
    hex_len = log(int_val0)/log(HEX_BASE);

    for (int i =hex_len; i >= 0; i--)
    {
        index = int_val0 % HEX_BASE;
        hex_val[i] = hex_list[index];
        int_val0 = int_val0/HEX_BASE;
    }
    printf("Hex value of '%c' is '0x%s'\n", cin0, hex_val);
}

void str_binary(char cin1)
{
    char bit_val[65535];
    int int_val1 = (int) cin1;
    int bit_len = log(int_val1)/log(BIT);

    for(int i = bit_len; i >= 0; i--)
    {
        if(int_val1 % BIT)
        {
            bit_val[i] = '1';
        }
        else
        {
            bit_val[i] = '0';
        }
        int_val1 = int_val1/2;
    }
    printf("Binary value:'%s'\n", bit_val);
}