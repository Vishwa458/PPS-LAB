// WAP to find the sum of array elements
#include<stdio.h>

int main() {
    int i, sum = 0, n;

    // Prompt user to enter the number of array elements
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int numbers[n];

    // Prompt user to enter the array elements
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++) {
        printf("\nEnter array element with index %d = ", i);
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];  // Add each element to the sum
    }

    // Print the sum of array elements
    printf("\nSum of array elements: %d", sum);

    return 0;
}