#include <stdio.h>

int sumOfDigits(int n) {
    if(n == 0)
        return 0; // base case
    return (n % 10) + sumOfDigits(n / 10); // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Handle negative numbers
    if(num < 0)
        num = -num;
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}
