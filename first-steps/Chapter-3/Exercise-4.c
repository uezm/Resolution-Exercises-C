/* 4) Read four values of type float. Calculate and display the average
arithmetic of these values. */

/* Resolution */
#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, average;
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    average = (num1 + num2 + num3 + num4) / 4;
    printf("%f", average);
    return 0;
}
