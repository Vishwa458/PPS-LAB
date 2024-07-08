//WAP to implement strlen(),strcat(),strcpy() using the conecpts fo functions

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],result[100];
    
    //Reading first string
    printf("Enter first string: ");
    scanf("%s",&str1);

    //Reading second string
    printf("Enter first string: ");
    scanf("%s",&str2);

    printf("\nlength of first string %d",strlen(str1));

    printf("\nlength of second string %d",strlen(str2));

    printf("\nfirst string = %s \nsecond string = %s",str1,str2);

    strcat(str1,str2);

    printf("\nTwo strings joined = %s",str1);

    strcpy(str1,str2);

    printf("\nsecond string copied to first string = %s",str1);

    //other string functions that can be implemented are strcasecmp(),strcmp(),strncpy(),strncat(),puts()
    //gets - avoid using this function as it is vulnerable to attacks and attackers manipulate it as it does not perform the bound check

    return 0;
    
}
