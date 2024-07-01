//WAP to read 2 array elements and save sum of corresponding elements in third array and print them.

#include<stdio.h>

int main() {
    int sizeofarray, i;

    // Prompt user to enter the size of the arrays
    printf("Enter the array size: ");
    scanf("%d", &sizeofarray);

    // Declare three arrays of the given size
    int numbers1[sizeofarray], numbers2[sizeofarray], numbers3[sizeofarray];

    printf("\n************************************************************************");
    printf("\nEnter elements for first array: \n\n");

    // Read elements for the first array
    for (i = 0; i < sizeofarray; i++) {
        printf("Index %d = ", i);
        scanf("%d", &numbers1[i]);
    }

    printf("\n************************************************************************");
    printf("\nEnter elements for second array: \n\n");

    // Read elements for the second array
    for (i = 0; i < sizeofarray; i++) {
        printf("Index %d = ", i);
        scanf("%d", &numbers2[i]);
    }

    printf("\n***********************************************************************");
    printf("\nSum of corresponding elements of two arrays:  \n");

    // Calculate the sum of corresponding elements and store in the third array
    for (i = 0; i < sizeofarray; i++) {
        numbers3[i] = numbers2[i] + numbers1[i];
        // Print the sum of corresponding elements
        printf("\nIndex %d = %d", i, numbers3[i]);
    }

    return 0;
}