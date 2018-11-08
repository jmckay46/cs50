#include<cs50.h>
#include<stdio.h>

void swap(int *, int *);

int main()
{
    int list[8] = { 1, 9, 6, 3, 8, 7, 2, 5 };
    int n = 8;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            if(list[j] > list[j+1])
            {
                swap(&list[j], &list[j+1]);
            }
        }
    }

    for(int i =0; i < 8; i ++)
    {
        printf("%d\n", list[i]);
    }

}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
