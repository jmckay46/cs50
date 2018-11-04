#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int int_val = get_int("Integer value: ");
    int n = log(int_val)/log(16)+1;
    char hex_list[16] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex_val[4096];
    int index;

    for(int i = n; i >=0; i--)
    {
        index = int_val % 16;
        hex_val[i] = hex_list[index];
        int_val = int_val/16;
    }
    printf("Hexadecimal value: 0x%s\n", hex_val);
}