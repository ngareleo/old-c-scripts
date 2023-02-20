#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}

int htoi (char str[])///The hexadecimal number
{
    int cc;
    cc = 0;
    while ( str[cc] != '\n')
    {
        ++cc;
    }
    return cc;
}

void getnumber ( char str[])
{
    int c , nc ;
    nc = 0;
    while ( (c = getchar()) != '\n')
    {
        str[nc++] = c ;
    }
}
