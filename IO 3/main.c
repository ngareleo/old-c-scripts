#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

void temp_conversion()
{
    for (int fahr = 0 ; fahr <= 200 ; fahr += 20)
    {
        printf("\n\t%d\t%f\n" ,fahr, 5.0/9.0 * (fahr - 32));
    }
}
void longestLine()
{
    /*To illustrate the use of character arrays and functions to manipulate them*/
    /* let's write a program that reads a set of text lines and prints the longest*/

}
void getLine(max_len)
{
    int c , nl ,nc;
    nl = nc = 0;
    char line [max_len];
    while ( (c == getchar()) != 0 && nc < MAX_LENGTH && (c == getchar()) != '\n' )
    {
        line [nc] = c;
        ++nc;
    }
    for (int i = 0 ; i < max_len;++i )
    {
        printf("%s",line[i]);
    }
}
int main()
{
    getLine(MAX_LENGTH);
    return 0;
}
