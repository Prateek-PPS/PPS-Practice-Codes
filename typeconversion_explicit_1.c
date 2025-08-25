#include <stdio.h>

int main() {
    int a = 11, b = 3;
    float result;
    // Explicit type conversion (type casting)
    result = a / 3.0;
    printf("Without type casting: %d / %d = %d\n", a, b, a / b);
    printf("With type casting   : %d / %d = %.2f\n", a, b, result);
    return 0;
}
