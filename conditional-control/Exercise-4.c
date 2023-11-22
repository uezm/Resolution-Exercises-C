/* 4) Write a program that reads a worker's salary and the value of a loan installment. 
If the installment:
? Is more than 20% of salary, print: 'Loan not guaranteed'.
? Otherwise, print: 'Loan granted'. */

/* Resolution */
#include <stdio.h>

int main() 
{
    float salary, installment;
    printf("Enter the salary amount: \n");
    scanf("%f", &salary);
    printf("Enter the loan installment amount: \n");
    scanf("%f", &installment);

    if(installment > (salary * 0.20)) {
        printf("Loan not granted.");
    } else {
        printf("Loan granted.");
    }
    return 0;
}
