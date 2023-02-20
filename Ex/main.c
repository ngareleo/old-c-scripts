#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define LIMIT 1000  ///size of array

/**Logic control*/
#define ON 0
#define OFF 1

/**Keys*/
#define SLASH '\x2f'
#define NULL '\0'

char input[LIMIT];
int main()
{
    char string_one [40];
    char string_two [40];
    printf("Enter string one :\n");
    getline(string_one , 40);
    printf("Now string two :\n");
    getline(string_two , 40);
    printf("String One is : %s\nString two is : %s",string_one,string_two);
    squeeze(string_one,string_two);
    return 0;
}

void decomment(char str [])
{
    /*Remove comments*/
    int cc = 0; ///Consecutive Comments
    ///Look for comment

    for ( int i = 0 ; i < getlen(str) ; ++i)
    {
        if ( str[i] == SLASH && str[i + 1] == SLASH )
        {
            remove_c(str,i,NULL);
        }
    }

}

void remove_c ( char str [],int from , int to)
/// Removing actual characters
{
    for ( int i = from ; i < to ; ++i)
    {
        str[i] == NULL;
    }
}

void entab( char str [])

/**
* Program has a big bug
>>The tab is added only when (spaces % 4 = 0)
*/
{
    int str_len = getlen(str);
    int ns , status ; ///Number of spaces
    ns = status = 0;
    /**Check for continuous spaces*/
    for (int i = 0 ; i <= str_len ; ++i)
    {
        if (str[i] == ' ')
        {
            status = OFF;
        }
        else if (str[i] != ' ')
        {
            status = ON;
            ns = 0;
        }
        if (status == OFF)
        {
            ++ns;
        }
        if (ns >= 4)
        {
            for (int j = 0 ; j <= ns - 1 ; ++ns )
            {
                str[ i - j] = '\b'; ///Remove spaces to fill a tab
            }
            str[i] = '\t';
            ns = 0;
        }
    }
    printf("%s",str);
}

void detab()
///replace a tab with a space
{
    for ( int i = 0 ; i < LIMIT ; ++ i)
    {
        if (input[i] == '\t')
        {
            input[i] = ' ';
        }
    }
}
int getlen( char str[])
/// To get the length of an array
{
    int cc = 0;
    while ( str[cc] != '\0' )
    {
        ++cc;
    }
    return --cc;
}
void reverse (char str [])
{
    int cc ; ///Character count
    cc = 0;
    while ( str[cc] != '\0' )
    {
        ++cc;
    }
    while ( (cc - 1) > 0 ) ///Loop happens (n times == length of word)
    {
        str[cc] = str[0];///Move the first character to end
        for (int i = 0 ; i < cc - 1 ; ++i)
        {
            str[i] = str[i+1]; ///Push all characters ahead
        }
        --cc;
    }
    printf("%s",str);
}

int getline( char str [] ,int size_limit)
{
    int c , nc = 0;
    while ((c = getchar()) != EOF && nc < size_limit)
    {
        str[nc++] = c;
        if (c == '\n')
        {
            str[nc] = '\0';
            return 1; ///Return 1 >> Still typing
        }
        if ( nc == size_limit)
        {
            return -1; ///Return -1 >> Overflow
        }
    }
    return 0; ///Return 0 >> Done typing
}
void to_lowercase( char str[])
{
    int cc = 0;
    while ( str[cc] != '\0')
    {
        if ( str[cc] >= 'A' && str[cc] >= 'Z')
        {
            str[cc] = str[cc] + 32;
        }
    }
}
void squeeze( char s_one[] , char s_two[])
{
    ///that deletes each letter in s_two that matches any character in s_one

    int the_characters[25];///To store all the characters in the string s_one
    to_lowercase(s_one);
    to_lowercase(s_two);
    for (  int i = 0 ; i < 25 ; ++i)
    {
        the_characters[i] = 0;
    }
    ///Parse through s_one and get the letter frequency
    int cc = 0;
    while ( s_one[cc] != '\0')
    {
        if (s_one[cc] >= 'a' && s_one[cc] <= 'a')
        {
            ++the_characters['a' - s_one[cc]];
        }
        ++cc;
    }
    printf("The letter frequency : ");
    for ( int k = 0 ; k < 25 ; k++)
    {
        printf("%d",the_characters[k]);
    }
}
