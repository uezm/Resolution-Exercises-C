/* 3) Write a program that reads a number integer and then print
the message 'Value read:', followed by the integer value. Use only one
printf() command. */

/* Resolution */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("Value read: %d", num);
    return 0;
}
