// Program to print the sum of all the digits of a given number
#include <stdio.h>

int main() {
    int num, sum = 0, rem; // Declare variables

    // Prompt user for input
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &num);

    // Loop to calculate the sum of digits
    while (num > 0) {
        rem = num % 10; // Get the last digit
        sum = sum + rem; // Add the digit to sum
        num = num / 10; // Remove the last digit
    }

    // Print the result
    printf("Sum of digits is %d\n", sum);
    return 0;
}