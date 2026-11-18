//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i;
    long long product = 1; // Use long long to handle larger products
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0) // Check if the number is even
        {
            product *= i; // Multiply the even number to the product
        }
    }
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    return 0;
}