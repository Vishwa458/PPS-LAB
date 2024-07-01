/*WAP ro find the greatest of three numbers*/

#include<stdio.h>

int main()
{
    int no1, no2, no3, great; // Declare variables to store three numbers and the greatest number

    printf("Enter three numbers: "); // Prompt the user to enter three numbers
    scanf("%d%d%d", &no1, &no2, &no3); // Read the three numbers from the user

    // Determine the greatest number among the three
    if(no1 > no2 && no1 > no3)
        great = no1; // If no1 is greater than both no2 and no3, assign no1 to great
    else if(no2 > no1 && no2 > no3)
        great = no2; // If no2 is greater than both no1 and no3, assign no2 to great
    else
        great = no3; // If neither no1 nor no2 is the greatest, assign no3 to great

    printf("Greatest of three numbers is: %d", great); // Print the greatest number
    return 0; // Return 0 to indicate successful execution
}