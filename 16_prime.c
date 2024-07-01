// Program to check whether the entered number is a prime or not
#include <stdio.h>

int main() {
    int n, i, flag = 1; // Declare variables

    // Prompt user to enter a number
    printf("Enter the number to check: ");
    scanf("%d", &n);

    // Loop from 2 to n/2 to check for factors
    for(i = 2; i <= n / 2; i++) {
        // If n is divisible by i, it's not a prime number
        if(n % i == 0) {
            flag = 0; // Set flag to 0 indicating not prime
            break; // Exit the loop
        }
    }

    // Check the flag to determine if the number is prime
    if(flag == 1)
        printf("Number is prime.\n");
    else
        printf("Number is not prime.\n");

    return 0; // Return 0 to indicate successful execution
}