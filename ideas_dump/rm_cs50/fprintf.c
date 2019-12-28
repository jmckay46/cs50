#include <cs50.h>
#include <stdio.h>
#include <string.h>

//.csv -> comma separated values/variables

int main()
{
    //Open file
    FILE *file = fopen("phonebook.csv", "a");

    //Get strings from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //Print(write) strings to a file
    fprintf(file, "%s, %s\n", name, number);

    //Close file
    fclose(file);
}