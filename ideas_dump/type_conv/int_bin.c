#include<cs50.h>
#include<stdio.h>
#include<math.h>

void binary_value(int);

int main()
{
    int int_num = get_int("Integer value: ");
    binary_value(int_num);
}


void binary_value(int int_val)
{
    char bin_val[65535];
    int n = log(int_val)/log(2);

    for(int i = n; i>=0; i--)
    {
        if(int_val%2 == 1)
        {
            bin_val[i] = '1';
        }
        else
        {
            bin_val[i] = '0';
        }

        int_val = int_val/2;
    }
    printf("Binary value: %s\n", bin_val);
}
