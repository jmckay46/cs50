#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int int_num = get_int("Integer value: ");
    int n = log(int_num)/log(2);
    char binary[65535];

    for(int i = n; i >= 0; i--)
    {
        if(int_num%2 == 1)
        {
            binary[i] = '1';
        }
        else
        {
            binary[i] = '0';
        }
        int_num = int_num/2;
    }

    printf("Binary Value: %s\n", binary);
}
