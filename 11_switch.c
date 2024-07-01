/*WAP that takes two operands and one operator from the user, 
perform the operation, and prints the results by using switch statement*/


#include<stdio.h>

int main()
{
    int no1, res, no2; // Declare integer variables for the two numbers and the result
    char op; // Declare a character variable for the operator

    // Prompt the user to enter an operator
    printf("enter operator: + - * / ");
    scanf("%c", &op); // Read the operator from the user

    // Prompt the user to enter two numbers
    printf("enter 2 numbers: ");
    scanf("%d %d", &no1, &no2); // Read the two numbers from the user

    // Switch statement to perform the operation based on the entered operator
    switch(op)
    {
        case '+': 
            res = no1 + no2; // Perform addition
            printf("sum is: %d", res); // Print the result
            break;
        case '-': 
            printf("sum is: %d", no1 - no2); // Perform subtraction and print the result
            break;
        case '*': 
            printf("sum is: %d", no1 * no2); // Perform multiplication and print the result
            break;
        case '/': 
            printf("sum is: %d", no1 / no2); // Perform division and print the result
            break;
        case '%': 
            printf("sum is: %d", no1 % no2); // Perform modulus operation and print the result
            break;
        // case '+': 
        //     printf("sum is: %d", no1 + no2); // This case is redundant and commented out
        //     break;
        default:
            printf("please enter the correct operation"); // Print an error message if the operator is invalid
            break;
    }

    return 0; // Return 0 to indicate successful execution
}