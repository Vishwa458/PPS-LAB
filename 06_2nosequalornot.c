#include<stdio.h>

int main()
{
    // Declare two double variables to store the input numbers
    double no1, no2;

    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    // Read the first number from the user input
    scanf("%lf", &no1);

    // Prompt the user to enter the second number
    printf("Enter number 2: ");
    // Read the second number from the user input
    scanf("%lf", &no2);

    // Check if the two numbers are equal
    if(no1 == no2)
        // If the numbers are equal, print a message indicating they are equal
        printf("Entered numbers %f and %f are equal.\n", no1, no2);
    else
        // If the numbers are not equal, print a message indicating they are not equal
        printf("Entered numbers %f and %f are not equal.\n", no1, no2);

    // Return 0 to indicate successful execution of the program
    return 0;
}