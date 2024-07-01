//WAP to find the minimum and maximum element of an array
#include<stdio.h>

int main() {
    int min, max, n, i;

    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int numbers[n];

    // Read array elements from the user
    printf("\nEnter the elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    // Initialize min and max with the first element of the array
    min = max = numbers[0];

    // Find the minimum and maximum elements in the array
    for(i = 1; i < n; i++) {
        if(min > numbers[i])
            min = numbers[i];
        if(max < numbers[i])
            max = numbers[i];
    }

    // Print the minimum and maximum elements
    printf("Minimum element of the array: %d\n", min);
    printf("Maximum element of the array: %d", max);

    return 0;
}