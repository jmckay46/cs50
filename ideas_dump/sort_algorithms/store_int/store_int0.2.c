#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

//this program simply stores command line arguments into an array & prints the list.

void swap(char *, char*);

int main(int argc, string argv[])
{
    string list[argc-1];
   // string s_list[argc-1];

    //take command line arguments and store it in list[]
    for(int i =0; i <= argc-1; i++)
    {
        list[i] = argv[i+1];
    }

    //think about tmp..
    for(int i = 0; i <= argc-1; i++)
    {
        for(int n = 0; n <= argc-1; n++)
        {
            if(list[i] < list[n+1])
            {
                swap(list[i], list[n+1]);
            }
        }
    }

    for(int i = 0; i <= argc-1; i++)
    {
        printf("%s\n", list[i]);
    }
}

void swap(char* s1, char* s2)
{
    char* temp = s1;
    s1 = s2;
    s2 = temp;
}
