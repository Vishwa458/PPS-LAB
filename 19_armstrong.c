// Program to print all the Armstrong numbers up to 1000
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    // Loop through numbers from 0 to 1000
    for (i = 0; i <= 1000; i++)
    {
        int num = i, dig = 0;
        // Calculate the number of digits in the number
        while (num > 0)
        {
            num = num / 10;
            dig++;
        }
        num = i;
        int rem = 0, sum = 0;
        // Calculate the sum of the digits raised to the power of the number of digits
        while (num > 0)
        {
            rem = num % 10;
            sum = sum + pow(rem, dig);
            num = num / 10;
        }
        // Check if the sum is equal to the original number
        if (sum == i)
        {
            printf(" %d", sum);
        }
    }
    return 0;
}