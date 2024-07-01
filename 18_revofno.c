// Program to find the reverse of the entered number 
#include<stdio.h>

int main() {
    int num, rev = 0, rem;      // Initialize variables

    printf("Enter a number to find the reverse of it: ");
    scanf("%d", &num);          // Read the input number

    while (num > 0) {
        rem = num % 10;         // Get the last digit of the number
        rev = rev * 10 + rem;   // Append the digit to the reversed number
        num = num / 10;         // Remove the last digit from the number
    }

    printf("Reverse of the number is = %d\n", rev); // Print the reversed number
    return 0;                   // Exit the program
}