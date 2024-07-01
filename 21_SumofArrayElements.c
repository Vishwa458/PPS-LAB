//Program to find the sum of array elements

#include<stdio.h>
#include<conio.h>

void main()
{
    int n=0, i, sum=0;        //Declaration of variables

    // Prompt user to enter the size of the array
    printf("Enter the size of an 1.D array: ");
    scanf("%d", &n);

    int marks[n];

    // Prompt user to enter elements of the array
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i]; // Add each element to the sum
    }

    // Print the sum of the array elements
    printf("Sum of array elements is %d ", sum);

    // getch(); // Uncomment if using Turbo C/C++ to hold the output screen
    // return 0; // Not needed as main is void
}