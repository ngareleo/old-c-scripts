#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop ,cc = 0 , answer = 0;
    while ( cc++ < 3){
        printf("Enter a number :\n");
        scanf("%d",&loop);
        answer += loop;
    }
    float average = answer / 3.0;
    printf("Your total is %d\nThe average is %f\n",answer,average);
    printf("Value of cc is %d",cc);
}
