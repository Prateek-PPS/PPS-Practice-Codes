#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a number: ");//153
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);
    return 0;
}
