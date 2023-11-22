/* 2) Write a program that reads two numbers and displays the biggest from them. 
If the two numbers are the same, print the 'Equal numbers' message. */

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
        printf("Equal numbers!");
    }
    return 0;
}
