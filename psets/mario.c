#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int uNum;
    do
    {
         uNum = get_int("Height: ");
    }

    while(uNum <= 0);

    printf("\n");

    for(int i = 0; i < uNum; i++ )
        {
            for (int j = uNum; j > i; j--)     //prints no of spaces
                {
                    printf(" ");
                }
            for (int l = 0; l <= i; l++)     //prints no of hashes
                {d
                    printf("#");
                }

            printf("  ");

            for (int k = 0; k <= i; k++)
                {
                    printf("#");
                }

            printf("\n");
        }
}