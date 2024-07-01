//Program to check whether enterd year is a leap year or not

/*
#include<stdio.h>
int main()
{
    int yr;
    printf("entr year: ");
    scanf("%d",&yr);
    if((yr%4==0)&&(yr%400==0 || yr%100!=0))
        printf("year is leap year!");
    else
        printf("year is not a leap year");
    return 0;
}*/

#include <stdio.h>  // Include standard input-output library

int main() {
    int yr;  // Declare an integer variable to store the year
    printf("Enter year: ");  // Prompt the user to enter a year
    scanf("%d", &yr);  // Read the year entered by the user and store it in the variable 'yr'
    
    // Check if the year is a leap year
    if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)) {
        printf("Year is a leap year!\n");  // If the year is a leap year, print this message
    } else {
        printf("Year is not a leap year\n");  // If the year is not a leap year, print this message
    }
    
    return 0;  // Return 0 to indicate successful execution
}