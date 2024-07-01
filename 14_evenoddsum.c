//print the sum of even and odd numbers from 1 to N
#include<stdio.h>

int main() {
    int evensum = 0, oddsum = 0, i, num = 0;

    // Prompt user for input
    printf("Enter the number till sum of even and odd needs to be printed: ");
    scanf("%d", &num);

    // Loop from 1 to the entered number
    for(i = 1; i <= num; i++) {
        // Check if the number is even
        if(i % 2 == 0)
            evensum = evensum + i; // Add to even sum
        else
            oddsum = oddsum + i; // Add to odd sum
    }

    // Print the results
    printf("Sum of even numbers: %d \nSum of odd numbers: %d", evensum, oddsum);

    return 0;
}
