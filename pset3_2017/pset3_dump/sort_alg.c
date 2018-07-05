#include <stdio.h>
#include <cs50.h>

void size(int stack[]);

int main()
{
    int list[] = { 9, 5, 3, 6, 7 };
    size(list);
}

void size(int stack[])
{
    int i = 0;
    int n = *stack;

    while (*stack != '\0')
    {
        printf("%i\n", n);
        n++;
        i++;
    }
    printf("%i\n", i);
}