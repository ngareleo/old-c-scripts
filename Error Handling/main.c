#include <stdio.h>
#include <stdlib.h>
/**
* Occur once
**/
#define MAXLEN 1000
#define OSB '\x5b' /// [
#define CSB '\x5d' /// ]
#define OCB '\x7b' /// {
#define CCB '\x7d' /// }
#define OB '\x28' /// (
#define CB '\x29' /// )
/**
* Occur twice
**/
#define SINGLE_QUOTES '\x27' /// '
#define DOUBLE_QUOTES '\x'  /// "
#define SLASH '\x2f'
/**
*Special keys
*/
#define COLON '\x3a' /// :
/**
*/
#define ON 0
#define OFF 1
/**
* The idea of this file "Error Handling"is to sort
    > Syntax errors in "code"
* Closing and opening brackets
*Double and single quotation marks
*Auto indentation
*
*/
int typewritter(char str []);
void autoindent (char str []);

char input [];
int nc = 0;


int main()
{
    while ( 1 == 1 )
    {
        printf("Leo\n");
    }
    return 0;
}

void fold ( char str [])
{
    int status , cc;
    cc = 0;  ///Current character
    status = ON; ///On >> in word , Off >> out of word
    while ( cc < len(str))
    {
        if ( cc < 40)
        {
          if (str[cc] == ' ' || str[cc] == '\t')
        {
            status = OFF;
        }
        else
        {
            status = ON;
        }
        ++cc;
        }
        else
        {
            if ( status == OFF)
                {
                    str[--cc] = '\n';
                }
                ++cc;
        }
    }
}
int len ( char str [])
{
    int cc = 0;
    while ( str[cc] != '\0')
    {
        ++cc;
    }
    return cc - 1;
}
int typewritter(char str [])
{
    int c ,nl ,nw ;
    nl = nw = 0;
    extern nc;
    while ( (c = getchar()) != '/n' && nc != MAXLEN)
    {
        str[++nc];
        putchar(c);
        if ( c = '\n')
        {
            ++nc;
            str[nc] = '\0'; /// "\0" > end of line
            return 1; /// Return 1  > Still typing
            ///Return -1 >>error > stop processing
            ///Return -2 >> Overflow
        }
        else if ( c == EOF )
        {
            return 0; ///Return 0 >> Done typing
        }
        else if ( c == COLON)
        {
            str[++nc] = '\0';
            char new_line [MAXLEN];
            typewritter(new_line);
            new_line[0] = '\t';
            continue;
        }
    }
}
