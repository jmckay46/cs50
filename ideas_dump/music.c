#include<cs50.h>
#include<stdio.h>


//here we're going to work on some functions from cs50's problemset 3 - music
//we're going to work on three functions: duration, frequency, and is_rest - in main()

int duration(string fraction);
//int frequency(string note);
//bool is_rest(string s);

int main(void)
{
    string s = get_string("duration (X/Y): ");

    int d = duration(s);                            //returns a fraction
}

