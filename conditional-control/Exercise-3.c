/* 3) Write a program that reads an integer and checks if
this number is odd or even. */

/* Resolution */
#include <stdio.h>

int main() 
{
    int num;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("This integer is even!");
    } else {
        printf("This integer is odd!");
    }
    return 0;
}
