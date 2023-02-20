#include <stdio.h>
#include <stdlib.h>
#define MAXLEN


int main()
{

    printf("%s",po);
    return 0;
}

void getline( char str [] ,int number_of_chars)
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

void getnumber( char str [])
{
    int c , nc ;
    nc = 0 ;

    while ( ( c = getchar()) != '\n')
    {
        str[nc++] = c;
    }
}
int htoi( char str[])
{
    int numbers [10] = {0,1,2,3,4,5,6,7,8,9};
    char chars [6] = {'a','b','c','d','e','f'};
    int cc = 0;
    int answer = 0;
    while( cc++ < strlen(str))
    {
        for( int i = 0 ; i < 10 ; ++i)
        {
            if ( str[cc] == numbers[i])
            {
                continue;
            }
        }
    }
}

int to_power( int base , int square)
{
    int cs = 0;
    while( cs++ < square)
    {
        printf("\nValue of cs = %d\tValue of base = %d",cs,base);
        base *= base;
    }
    return base;
}
int strlen( char str [])
{
    int nc;
    while ( str[nc] != '\0')
    {
        nc++;
    }
    return nc;
}
