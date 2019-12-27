#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

//void swap(int *, int *);

int main(int argc, string argv[])
{
    if(argc <= 0)
    {
        printf("Usage: ./bubble_sort\n");
        return 1;
    }

    //store second line CLA into variable n
    int n = atoi(argv[1]);
    int index = atoi(argv[2]);
    //declare array
    int i = 0;
    int list[i];

    for(; i <= index; i--)
    {
        list[i] = n;
    }

   /* for(int i = n; i <= n; i--)
    {
        for(int j = n; j <= i; j--)
        {
            if(list[j] > list[j+1])
            {
                swap(&list[j], &list[j+1]);
            }
        }
    }
    */
}

/*void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
*/