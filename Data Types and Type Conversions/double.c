#include <stdio.h>

int main() {
    float a = 9.1415926535674828748;       // 32-bit precision
    double b = 9.1415926535674828748;      // 64-bit precision


    printf("---------float  a = %.10f\n", a);
    printf("---------double b = %.10f\n", b);
    return 0;
}
