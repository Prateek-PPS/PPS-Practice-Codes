#include <stdio.h>
int main() {
    int x = 10;
    float y = 3.3;
   // Implicit conversion
    float result1 = x + y;   // x (int) is automatically converted to float
    // Explicit conversion
    float result2 = (1.0)*x / 3; // x is manually converted to float
    printf("Implicit Conversion Result = %f\n", result1);
    printf("Explicit Conversion Result = %f\n", result2);
    return 1;
}
