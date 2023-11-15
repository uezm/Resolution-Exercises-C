/* 5) Write a program that reads a value like float and then print it
using the '%d' operator. See what happened. */

/* Resolution */
#include <stdio.h>

int main()
{
    float num;
    scanf("%f", &num);
    printf("%d", num);
    return 0;
}
