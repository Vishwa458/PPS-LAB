//print all the leap years upto a given year
#include<stdio.h>

int main() {
    int year = 1, i = 1;
    printf("Print all the leap years up to the given year: ");
    scanf("%d", &year);
    for(i = 1; i <= year; i++) {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
            printf(" %d", i);
        }
    }
    return 0;
}