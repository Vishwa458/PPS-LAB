// Program to convert decimal number to binary number

#include<stdio.h>

int main()
{
    int b, d, rem = 0, sum = 0, i = 1;          // Initialize variables
    printf("enter the decimal number: ");
    scanf("%d", &d);                            // Read the decimal number from user input

    while(d > 0)
    {
        rem = d % 2; // Get the remainder when d is divided by 2 (binary digit)
        d = d / 2; // Update d to be the quotient of d divided by 2
        sum = sum + i * rem; // Add the binary digit to the sum
        i = i * 10; // Update i to move to the next place value in binary
    }

    printf("number is %d", sum);                // Print the binary equivalent
}