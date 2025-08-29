/* Write a C program using ternary operator to check
     whether a number is positive, negative, or zero */

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Using nested ternary operator
    (num > 0) ? printf("%d is Positive\n", num) :
    (num < 0) ? printf("%d is Negative\n", num) :
                printf("The number is Zero\n");
    if(num>0)
        printf("\nI study at LNMIIT");
    return 0;
}




