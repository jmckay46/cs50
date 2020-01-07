#include <cs50.h>
#include <stdio.h>
#include <string.h>

//.csv -> comma separated values/variables

int main()
{
    //Open file
    char size[1000];

    FILE *file = fopen("bmp.txt", "r");

    fread(size, 1000, 1, file);

    printf("%s\n", size);


    //Close file
    fclose(file);
}