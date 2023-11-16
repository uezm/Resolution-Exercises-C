/* 1) Write a program that reads an integer and returns its
predecessor and its successor. */

/* Resolution */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d, %d", num - 1, num + 1);
    return 0;
}
