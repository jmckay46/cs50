#include<stdio.h>
#include<cs50.h>

#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

void mario(int h);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height < 0 || height > 23);

    mario(height);

}//end main

void mario(int m)
{
    for(int n = 1; i < n+1; n++)                      //print this many columns, changed i to 1 since it's not a full pyramid
    {
        for(int i = m; i >n+1; i--)
        {                                             //print this many spaces, decrement the amount of printed spaces
            printf("%c", SPACE);
        }
        for(int j =0; j <=n; j++)                   //print this many blocks, increment the amount of printed blocks
        {
            printf("%c", HASH);
        }
        printf("%c", NEWLINE);                       //print a new line per loop
    } //end for loop
}//end mario