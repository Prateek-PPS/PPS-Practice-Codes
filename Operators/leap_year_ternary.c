/* Write a C program to check whether a given year
     is a leap year or not using the ternary operator */

#include <stdio.h>
int main() {
    int year;
    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);
    // Using ternary operator to check leap year
    (year % 400 == 0) ? printf("%d is a Leap Year.\n", year) :
        (year % 100 == 0) ? printf("%d is NOT a Leap Year.\n", year) :
            (year % 4 == 0) ? printf("%d is a Leap Year.\n", year) :
                printf("%d is NOT a Leap Year.\n", year);
    return 0;
}

/*
//Shorter Version
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    // Single ternary condition
    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        ? printf("%d is a Leap Year.\n", year)
        : printf("%d is NOT a Leap Year.\n", year);
    return 0;
} */





