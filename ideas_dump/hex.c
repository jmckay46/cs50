#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int int_val = get_int("Integer value: ");
    int n = log(int_val)/log(16)+1;
    int int_list[16] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex_val[n];
    int index;

    for(int i = 0; i < n; i++)
    {
        index = int_val % 16;
        hex_val[i] = int_list[index];
        int_val = int_val/16;
    }
    printf("%s\n", hex_val);

}