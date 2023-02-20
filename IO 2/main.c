#include <stdio.h>
#include <stdlib.h>

#define ON 0
#define OFF 1
#define MAX_LENGTH 1000

void printword(){

    int c , nl , nw , state ;
    nl,nw,state = 0;
    while((c = getchar())!= 'q'){
        if (c == ' ' || c == '\t' || c == '\n'){

            state = OFF;
        }
        if (state == OFF){

            c = '\n';
            state = ON;
        }
         putchar(c);
    }
}

void count_numbers(){

    int numberLine [10] ;
    for( int i = 0; i < 10; ++i)
        {
        numberLine[i] = 0;
    }
    int c ;
    while ((c = getchar()) != 'q')
        {
        if (c < '9' || c > '0'){

            numberLine[ c - '0'] = numberLine[ c - '0' ] + 1;
            }
        }
    for(int i = 0 ;i < 10; ++i)
        {
        printf("\n%d\t%d\n",i,numberLine[i]);
    }
}

void word_length_histogram(){

    int numberLine [20] ;
    for( int i = 0; i < 20; ++i)
        {
        numberLine[i] = 0;
    }
    int c , wl , nw , state ;
    c = wl = nw = 0;
    state = ON;
    while ( (c = getchar()) != 'q')
        {
        ++wl;
        if ( c == ' ' || c == '\n' || c == '\t')
        {
            state = OFF;
        }
        if (state == OFF)
        {
            if (wl <= 1)
            {
             state = ON;
             wl = 0;
            }
            else if ( wl >= 2)
            {
                state = ON;

                numberLine[nw] = wl - 1;
                ++nw;
                wl = 0;
            }
        }
    }
    for( int i = 0; i < 20; ++i)
        {
        int data = numberLine[i];
        for (int j = 0; j < data ; ++j)
        {
            printf("[]");
        }
             printf("\n");
        }
}

void letter_frequency()
{
    int numberLine [26] ;
    for( int i = 0; i < 26; ++i)
        {
            numberLine[i] = 0;
        }
    int c , wl , nw , state ;
    c = wl = nw = 0;
    state = ON;
    while ( (c = getchar()) != 'q')
        {
            if (c < 'z' || c > 'z')
                {
                    numberLine[ c - 'a'] = numberLine[ c - 'a' ] + 1;
                }
        }
    for( int i = 0; i < 26; ++i)
        {
        int data = numberLine[i];
        for (int j = 0; j < data ; ++j)
        {
            printf("|");
        }
            printf("     ");
            putchar(65 + i);
            printf("\n");
        }
}

int main()

{
    word_length_histogram();
    return 0;
}

int getline(char inputline [] , int max)
{

    int c, nc ;

    while ( (c = getchar()) != 'q' && nc < max)
    {
        inputline[nc] = c;
        ++nc;
    }
    return nc;
}













