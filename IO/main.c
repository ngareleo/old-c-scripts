#include <stdio.h>
#include <stdlib.h>

#define ON 0
#define OFF 1
#define MAXLEN 1000

int main()
{

    return 0;
}

int getlen( char str [])
{
    for ( int i = 0 ; str[i] != '\0')
}
void longest_line()
{
    char input_line[MAXLEN];
    char longest[MAXLEN];
    int len;
    int max;
    max = 0;
    while ( (len = getline(input_line,MAXLEN)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(input_line,longest);
        }
    }
    printf("%s",longest);
}
int getline( char main_line [] , int max)
{
    int c , nc;
    nc = 0;
    while ( (c = getchar()) != '\n' && nc < max )
    {
        main_line[nc] = c;
        ++nc;
        if ( c == '\n')
        {
            nc = nc - 1;
        }
    }
    return nc;
}

char reverse ( char str [] )
{
    int str_len = getline(str,MAXLEN);
    int cc = 0;
    int count = str_len;
    while (count < 0)
    {
        str[0] = str[str_len + 1];
        str[0] = ' ' ;
        while( str[cc] == ' ')
        {
            ++cc;
        }
        if ( cc > 0)
        {
            while ( cc > 0)
            {
                int i ;
                for (i = cc - 1;  i < str_len ; ++i)
                {
                    str[i] = str[i + 1];
                }
                --cc;
            }
        }
        --count;
    }
}
void copy (char parent[], char child[])
{
    for ( int i = 0 ; i < MAXLEN ; ++i)
    {
        child[i] = parent[i];
    }
    printf("\nLine copied.\n");
}
