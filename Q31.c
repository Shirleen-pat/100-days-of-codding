//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned int binary[32]; // Array to store binary digits
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check if the number is negative
    if(n < 0)
    {
        printf("Binary representation is not defined for negative numbers.\n");
        return 1;
    }
    
    // Convert to binary
    for(i = 0; n > 0; i++)
    {
        binary[i] = n % 2; // Store the remainder (binary digit)
        n /= 2; // Divide the number by 2
    }
    
    printf("Binary representation: ");
    for(i = i - 1; i >= 0; i--) // Print in reverse order
    {
        printf("%u", binary[i]);
    }
    printf("\n");
    
    return 0;
}