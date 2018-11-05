#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

#define HEX_BASE 16

int main()
{
    string s_in = get_string("Input: ");
    printf("\n");
    char hex_val[4095];
    char hex_list[HEX_BASE] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int index;
    int int_val;
    int n;
    char cin;

    for(int i = 0; i <strlen(s_in); i++)
    {
        cin = s_in[i];
        int_val = (int) cin;
        n = log(cin)/log(HEX_BASE)+1;

        for(int j = n; j >=0; j--)
        {
            index = int_val % HEX_BASE;
            hex_val[j] = hex_list[index];
            int_val = int_val/HEX_BASE;
        }
        printf("Hex value of %c is: 0x%s\n", s_in[i], hex_val);
    }
}

