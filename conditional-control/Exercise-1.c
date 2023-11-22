/* 1) Write a program that reads two numbers and shows which one
it's the biggest. */

/* Resolution */
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two number: \n");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2) {
        printf("The biggest number is: %d", num1);
    } else if(num2 > num1) {
        printf("The biggest number is: %d", num2);
    } else {
        printf("Invalid option!");
    }
    return 0;
}
