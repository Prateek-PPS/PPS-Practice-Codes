#include <stdio.h>
int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    // A natural number must be positive and without fractional part
    if (num > 0 && (int)num == num)
    {
        printf("%.0f is a Natural Number.\n", num);
    }
    else
    {
        printf("%.2f is NOT a Natural Number.\n", num);
    }
    return 0;
}
