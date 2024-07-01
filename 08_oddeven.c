/*WAP that finds whether a given number is odd or even*/

#include <stdio.h> // Include the standard input-output library

int main() {
    int n; // Declare an integer variable 'n' to store the user's input
    
    // Prompt the user to enter a number
    printf("Enter the number: ");
    
    // Read the input number from the user and store it in the variable 'n'
    scanf("%d", &n);
    
    // Check if the number is even or odd
    if (n % 2 == 0) { // If the remainder when 'n' is divided by 2 is 0, then 'n' is even
        printf("The number is even\n"); // Print that the number is even
    } else { // If the remainder is not 0, then 'n' is odd
        printf("The number is odd\n"); // Print that the number is odd
    }
    
    return 0; // Return 0 to indicate that the program ended successfully
}