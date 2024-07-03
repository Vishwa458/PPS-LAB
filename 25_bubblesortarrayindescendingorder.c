//WAP to sort an array elelmets using bubble sort
#include<stdio.h>

int main(){
    int i, j, size, temp = 0;

    // Prompt user to enter the size of the array
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    int numbers[size];

    // Reading array elements from the user
    printf("Enter array elements of size %d \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);   
    }

    // Bubble sort algorithm
    for(i = 0; i < size - 1; i++) 
    { // Outer loop
        for (j = 0; j < (size - i - 1); j++) 
        { // Inner loop
            if (numbers[j] < numbers[j + 1]) 
            { // Swap if the element found is greater than the next element
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing sorted array
    printf("Sorted array in descending order\n");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", numbers[i]);
    }

    return 0;            //return 0 to indicate successful execution of program
}