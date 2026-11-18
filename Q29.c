//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check if the number is negative
    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    for(i = 1; i <= n; i++)
    {
        factorial *= i; // Multiply the current number to the factorial
    }
    
    printf("The factorial of %d is: %llu\n", n, factorial);
    return 0;
}