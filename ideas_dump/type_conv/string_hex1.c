#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

#define HEX_BASE 16

void string_hex(char);

int main()
{
    string s = get_string("Input: ");

    for(int i = 0; i <strlen(s); i++)
    {
        string_hex(s[i]);
    }
}

void string_hex(char cin)
{
    char hex_val[4095];
    char hex_list[HEX_BASE] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int index, int_val, hex_len;

    int_val = (int) cin;
    hex_len = log(int_val)/log(HEX_BASE);

    for (int j =hex_len; j >= 0; j--)
    {
        index = int_val % HEX_BASE;
        hex_val[j] = hex_list[index];
        int_val = int_val/HEX_BASE;
    }
    printf("Hex value of '%c' is '0x%s'\n", cin, hex_val);
}