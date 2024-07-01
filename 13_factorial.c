#include<stdio.h>

int main()
{
    int i, fact = 1, num;

    // Prompt user to enter a number
    printf("Enter the number to find the factorial: ");
    scanf("%d", &num);

    // Calculate factorial
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    // Print the factorial
    printf("Factorial of %d is %d", num, fact);

    return 0; // Return 0 to indicate successful execution
}