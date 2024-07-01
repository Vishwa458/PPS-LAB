// Program to check whether the entered number is a prime or not
#include <stdio.h>

int main() {
    int n, i, count = 0;
    
    // Prompt user to enter a number
    printf("Enter the number to check: ");
    scanf("%d", &n);
    
    // Loop to check for factors of n
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0)
            count++; // Increment count if a factor is found
    }
    
    // If count is still 0, the number is prime
    if(count == 0)
        printf("Number is prime.\n");
    else
        printf("Number is not prime.\n");
    
    return 0;      // return 0 to indicate successful execution
}