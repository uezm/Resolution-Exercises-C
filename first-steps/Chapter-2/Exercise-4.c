/* 4) Write a program that reads an integer and then print it
using the '%f' operator. See the what happened. */

/* Resolution */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%f", num);
    return 0;
}
