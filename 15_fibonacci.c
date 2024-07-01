// Program to print Fibonacci series up to a given N number.
#include <stdio.h>

int main() {
    int num, first = 0, second = 1, i, next;

    // Prompt user for input
    printf("Enter the number to print Fibonacci series up to the number: ");
    scanf("%d", &num);

    // Print the first two numbers of the series
    printf("%d %d", first, second);

    // Generate and print the rest of the series
    for (i = 3; i <= num; i++) {
        next = first + second;
        first = second;
        second = next;
        printf(" %d", next);
    }

    return 0;
}