//Program to print binary to decimal

#include <stdio.h>
#include <math.h>

int main() {
    int rem = 0, n = 0, sum = 0, num = 0;
    
    // Prompt user to enter a binary number
    printf("enter the binary number: ");
    scanf("%d", &num);
    
    // Convert binary number to decimal
    while (num > 0) {
        rem = num % 10; // Get the last digit (remainder)
        num = num / 10; // Remove the last digit from the number
        sum = sum + rem * pow(2, n); // Add the value of the digit in decimal
        n++; // Move to the next position
    }
    
    // Print the decimal equivalent
    printf("number is %d", sum);
    
    return 0;
}