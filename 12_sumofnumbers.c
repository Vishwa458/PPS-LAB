// Program to print the sum of all the numbers up to a given number
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Loop from 0 to the entered number and calculate the sum
    for (i = 0; i <= num; i++) {
        sum = sum + i;
    }

    // Print the calculated sum
    printf("Sum of all the numbers up to the given number is = %d", sum);

    return 0;
}