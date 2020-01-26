#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main()
{
    char buffer[1000];

    FILE *file = fopen("bmp.txt", "r");

    fread(buffer, 1, 1, file);              //read 1 byte, 1 byte per time

    printf("%s\n", buffer);


    //Close file
    fclose(file);
}