#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, *ptr;

    age = 19;
    ptr = &age;
    printf("Address of age is %d\nThe value of age is %d\n",ptr,*ptr);
    return 0;
}
