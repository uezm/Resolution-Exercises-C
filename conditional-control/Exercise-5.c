/* 5) Write a program that reads a number and, if it is positive, calculate and show:
? The number entered squared.
? The square root of the entered number. */

/* Resolution */
#include <stdio.h>
#include <math.h> // Library required for mathematical functions

int main() 
{
    float num, squared, squared_root;
    printf("Enter the number: \n");
    scanf("%f", &num);
    if(num >= 0) {
        squared = (num * num);
        squared_root = sqrt(num);
        printf("The number entered squared: %.2f \n", squared);
        printf("The square root of the entered number: %.2f \n", squared_root);
    } else {
        printf("Invalid option!");
    }
    return 0;
}
