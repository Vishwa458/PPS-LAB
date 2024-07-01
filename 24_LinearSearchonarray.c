//WAP to search an elelment in an array using linear search
#include<stdio.h>

int main() {
    // Declaration of variables
    int i, n, element = 0, flag = 0;
    
    // Input size of the array
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int numbers[n];

    // Reading array elements
    printf("Enter elements of an array of size %d: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Input element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Searching logic
    for (i = 0; i < n; i++) {
        if (element == numbers[i]) {
            printf("Element found at array index location %d\n", i);
            flag = 1;
            break; // Exit loop once element is found
        }
    }

    // If element is not found
    if (flag == 0) {
        printf("Entered element not found in the array!\n");
    }

    return 0;
}