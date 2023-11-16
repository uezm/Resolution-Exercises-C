/* 5) Write a program that calculates the year of birth of a
person based on their age and current year. */

/* Resolution */
#include <stdio.h>

int main()
{
    int calcYearBirth, age, yearC;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Enter the current year: \n");
    scanf("%d", &yearC);

    calcYearBirth = yearC - age;
    printf("Your year of birth is: %d", calcYearBirth);
    return 0;
}