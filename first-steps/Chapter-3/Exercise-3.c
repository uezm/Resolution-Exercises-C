/* 3) Write a program that reads three integer values and displays their
sum. */

/* Resolution */
#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    printf("%d", sum);
    return 0;
}