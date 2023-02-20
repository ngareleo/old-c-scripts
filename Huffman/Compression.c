
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100
/**
In this file we will compress a line.\
Using hoffmans compression


1.We must get the line and store it in an array
2.Compress the file now
    1.We get the frequency of each individual character and store it in an array
    2.Make the binary tree with the nodes now
    3.

**/
int main()
{
    char str[MAXLEN];
    while ( getline(str,MAXLEN) > 0)
    {
        printf("%s",str);
    }
    return 0;
}

int getline( char str [] ,int number_of_chars)
{
    int c , nc ;
    nc = 0;
    while ( ( c = getchar()) != '\n')
    {
        str[nc++] = c ;
        if ( c == '\n')
        {
            return 0;
        }
        if ( nc > number_of_chars)
        {
            return -1;
        }
    }
}
